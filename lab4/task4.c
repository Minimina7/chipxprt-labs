#include<stdio.h>

int main(){
	
	unsigned int minimum = 0;
	unsigned int maximum = 0;
	unsigned int sumOfPopulation = 0;
	float average = 0;
	unsigned int population[10];

	printf("Enter the population of city 1: ");
	scanf(" %d", &population[0]);
	minimum = population[0];
	sumOfPopulation = population[0];

	for(int i = 1; i < 10 ; i++){
		printf("Enter the population of city %d: ",i+1);
		scanf(" %d", &population[i]);
		if(maximum < population[i])
			maximum = population[i];
		if (minimum > population[i])
			minimum = population[i];
		sumOfPopulation = sumOfPopulation + population[i];
	}

	average = (float) sumOfPopulation / 10;

	printf("\nThe population in reverse order:\n");

	for(int x = 9; x >= 0 ; x--){
		printf("City %d: %d\n", x+1, population[x]);
	}


	
	printf("Average population: %.2f\n",average);
	printf("Maximum population: %d\n",maximum);
	printf("Minimum population: %d\n",minimum);
	
	return 0;
}
