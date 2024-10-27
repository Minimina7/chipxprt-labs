#include<stdio.h>

int main(){
	
	unsigned short numberOfCities = 0;
	unsigned int minimum = 0;
	unsigned int maximum = 0;
	unsigned int sumOfPopulation = 0;
	float mean = 0;


	printf("Enter the number of cities: ");
	scanf("%hd", &numberOfCities);
	unsigned int population[numberOfCities];

	for(int i = 0; i < numberOfCities ; i++){
		printf("Enter the population of city %d: ",i+1);
		scanf(" %d", &population[i]);
		if(maximum < population[i])
			maximum = population[i];

		sumOfPopulation = sumOfPopulation + population[i];

		if ((i+1) == numberOfCities){
			mean = (float) sumOfPopulation / (i+1);
		}
	}
	minimum = population[0];
	for(int i = 0; i < numberOfCities ; i++){
		if (minimum > population[i])
			minimum = population[i];
	}


	
	printf("Mean population: %.2f\n",mean);
	printf("Maximum population: %d\n",maximum);
	printf("Minimum population: %d\n",minimum);
	
	return 0;
}
