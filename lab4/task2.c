#include<stdio.h>

int main(){
	
	unsigned short minutes = 0;

	printf("Please enter the minutes: ");
	scanf("%hd", &minutes);
	printf("M : S\n");

	for(unsigned short i = 0 ; i < minutes ; i++){
		for(unsigned short seconds = 0 ; seconds < 60 ; seconds++){
			printf("%02hd : %02hd\n",i , seconds);
		}
	}


	return 0;
}
