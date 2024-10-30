#include<stdio.h>
#include<stdlib.h>

float sum(int *DC , int counter){
	int sum = 0;
	for(int i = 0; i < counter ; i++){
		sum += DC[i];
	}
	return (float) sum/counter;
}

int main(){
	
	unsigned short counter = 0;
	char check = 'y';
	int *signal = (int*) malloc(sizeof(int));
	if (signal == NULL){
		printf("Error can't allocate a memory\n");
		return 1;
	}

	for(int i =0; check == 'y' ; i++){
		printf("Enter a sample integer value: ");
		scanf("%d", &signal[i]);
		printf("Do you want to add more samples? (y/n): ");
		scanf(" %c",&check);
		while (check != 'y' && check != 'n'){
			printf("\nWrong value, Please try again\n");
			printf("Do you want to add more samples? (y/n): ");
			scanf(" %c",&check);
		}
		if(i > 0)
			signal = (int*) realloc(signal , i * sizeof(int));
		counter++;
	}
	printf("You entered the following samples: %d", signal[0]);
	for(int i = 1; i < counter; i++){
		printf(", %d", signal[i]);
	}

	float average = sum(signal,counter);
	printf("\nCalculated average (DC value): %.2f\n" , average);
	
	printf("\nFinal adjusted samples after DC shift: \n");
	printf("%.2f", signal[0] - average);
	for(int i = 1; i < counter; i++){
		printf(", %.2f", signal[i] - average);
	}
	printf("\n");
	free(signal);
	return 0;
}
