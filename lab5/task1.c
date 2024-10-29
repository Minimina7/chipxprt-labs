#include<stdio.h>

int main(){
	
	char arrayChar[4];
	int arrayInt[4];
	short arrayShort[4];
	double arrayDouble[4];

	printf("\nCharacter array: \n");
	for(int i = 0; i < 4; i++){
		printf("%p\n",&arrayChar[i]);
	}
	
	printf("\nInteger array: \n");
	for(int i = 0; i < 4; i++){
		printf("%p\n",&arrayInt[i]);
	}

	printf("\nShort integer array: \n");
	for(int i = 0; i < 4; i++){
		printf("%p\n",&arrayShort[i]);
	}

	printf("\nDouble array: \n");
	for(int i = 0; i < 4; i++){
		printf("%p\n",&arrayDouble[i]);
	}
	printf("\n");

	return 0;
}
