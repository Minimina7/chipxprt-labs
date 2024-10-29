#include<stdio.h>

int MVP(int *matrix, int *vector ,int rows, int columns){
	int sum = 0;
	int prod = 0;
		for(int j = 0; j < columns ; j++){
			prod = matrix[j] * vector[j];
			sum += prod;
		}
		return sum;
	}

int main(){

	int rows = 0;
	int columns = 0;
	int vectorS = 0;
	
	do{
	printf("Please enter the number of rowx in the matrix: ");
	scanf("%d", &rows);
	printf("Please enter the number of columns in the matrix: ");
	scanf("%d", &columns);	
	printf("Please enter the number of elements in the vector: ");
	scanf("%d", &vectorS);
	} 
	while(columns != vectorS);
	
	int matrix[rows][columns];
	int vector[vectorS];
	int answer[rows];

	for(int i = 0; i < rows  ; i++){
		for(int j = 0; j < columns ; j++){
			printf("Please enter the value of the matrix (%d,%d): ",i,j);
			scanf("%d",&matrix[i][j]);
		}
	}
	for(int i = 0; i < vectorS ; i++){
		printf("Please enter value %d of the vector: ",i);
		scanf("%d",&vector[i]);
	}

	for(int i = 0; i < rows ; i++){
		answer[i] = MVP(matrix[i] , vector , rows , columns);
	}

	printf("\nThe result of matrix vector multiplication is: \n");
	for(int i = 0; i < rows ; i++){
		printf("%d\n",answer[i]);
	}
	return 0;
}
