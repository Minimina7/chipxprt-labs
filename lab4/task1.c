#include<stdio.h>

int main(){
	
	unsigned short samples = 0;
	
	printf("Enter number lines for the Pattern: ");
	scanf("%hd", &samples);
	char pattern1[samples];

	printf("For loop\n");

	for(int i = 0 ; i < samples ; i++){
		for(int s = samples ; s > i ; s--){
			printf(" ");	
		}
		for(int j = 0; j < i ; j++){
			pattern1[i] = '*'; 
			printf("%c",pattern1[i]);
		}
		printf("\n");
	}

	char pattern2 [samples];
	printf("\nWhile loop\n");
	unsigned short w = 0;

	while(w < samples){
		unsigned short x = samples;
		unsigned short y = 0;
		while(x > w){
			printf(" ");
			x= x- 1;
		}
		while(y < w){
			pattern2[w] = '*'; 
			printf("%c",pattern2[w]);
			y++;
	}
		w++;
		printf("\n");
	}
	return 0;
}
