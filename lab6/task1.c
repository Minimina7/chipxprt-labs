#include<stdio.h>
#include<stdlib.h>

void multi(int *vectorX , int *vectorY , int *vectorZ , int constantA , int constantB , int vectorS){
	for(int i = 0; i < vectorS ; i++){
		vectorZ[i] = (constantA * vectorX[i]) + (constantB * vectorY[i]);
	}
}

int main(){
	
	unsigned short vectorS = 0;
	short constantA = 0;
	short constantB = 0;
	printf("Please enter the size for all the vectors: ");
	scanf("%hd", &vectorS);
	printf("Please enter the value of constant A: ");
	scanf("%hd", &constantA);
	printf("Please enter the value of constant B: ");
	scanf("%hd", &constantB);

	int *vectorX = (int*) malloc(vectorS * sizeof(int));
	if(vectorX == NULL){
		printf("\nError allocating memory\n");
		return 1;
	}

	int *vectorY = (int*) malloc(vectorS * sizeof(int));
	if(vectorY == NULL){
		printf("\nError allocating memory\n");
		return 1;
	}

	int *vectorZ = (int*) malloc(vectorS * sizeof(int));
	if(vectorZ == NULL){
		printf("\nError allocating memory\n");
		return 1;
	}

	for(int i = 0; i < vectorS; i++){
		printf("Please enter the values %d in vector 1: ",i);
		scanf("%d", &vectorX[i]);	
	}
	printf("\n");
	for(int i = 0; i < vectorS; i++){
		printf("Please enter the values %d in vector 2: ",i);
		scanf("%d", &vectorY[i]);	
	}
	
	multi(vectorX,vectorY,vectorZ,constantA,constantB,vectorS);
	
	printf("\nThe result of the multiplication is: \n ");
	for(int i = 0; i < vectorS; i++){
		printf("Row %d: %d\n ", i , vectorZ[i]);	
	}
	
	free(vectorX);
	free(vectorY);
	free(vectorZ);
	return 0;
}

