#include<stdio.h>

int main(){
	
	unsigned short samples = 0;

	printf("Enter the number of terms: ");
	scanf("%hd", &samples);

	unsigned int fibonacci[samples];
	fibonacci[0] = 1;
	fibonacci[1] = 1;

	printf("Fibonacci Series up to %hd terms:\n",samples);

	for(unsigned short i = 0; i < samples; i++){
		if (i <2)
			printf("%d,",fibonacci[i]);
		else{
			fibonacci[i] = fibonacci[i-1] + fibonacci[i-2];
			printf("%d,",fibonacci[i]);
		}
	}
	printf("\n");
	return 0;
}
