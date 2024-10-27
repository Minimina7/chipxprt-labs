#include<stdio.h>

int main(){
	unsigned int positiveNumber = 0;
	float lessThan1 = 0;
	
	printf("Enter a positive integer: ");
	scanf("%d", &positiveNumber);
	printf("Numbers from %d to 0 in descending order:\n", positiveNumber);

	for(int i = positiveNumber; i >= 0 ; i--){
		printf("%d " , i);
	}
	
	printf("\nNumbers from 1 to %d following pattern B:\n", positiveNumber);

	for(int i = 1; i <= positiveNumber ; i++){
		printf("%d " , i);
	}

	printf("\nEnter an increment value less than 1: ");
	scanf("%f", &lessThan1);
	if (lessThan1 >= 1){
		printf("Error, the number should be less than 1\n");
	}
	else {
		printf("Numbers from 0 to %d with an increment of %.2f:\n", positiveNumber, lessThan1);
		for (float x = lessThan1 ; x <= positiveNumber ; x = x + lessThan1){
		printf("%.2f " , x);
		}
	printf("\n");

	}

	return 0;
}
