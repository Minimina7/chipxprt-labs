#include<stdio.h>

int main(){
	
	unsigned int userPrime = 0;
	char primeCheck = 0;

	printf("Please enter your number: ");
	scanf("%d", &userPrime);

	for (int i = 2 ; i < userPrime ; i++){
		if (userPrime % i == 0){
			primeCheck++;
			break;
		}
	}

	if (primeCheck == 0 && userPrime > 1)
		printf("%d is a prime number\n", userPrime);
	else{
		printf("%d is not a prime number\n", userPrime);
	}


	return 0;
}
