#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
	
	srand(time(NULL));
	unsigned short red[10][10];
	unsigned short green[10][10];
	unsigned short blue[10][10];
	unsigned short gray[10][10];
	
	printf("RGB Values: \n");
	for(int i = 0; i < 10; i++){
		for (int j = 0; j < 10; j++){
			red[i][j] = rand() % 256;
			green[i][j] = rand() % 256;
			blue[i][j] = rand() % 256;
			printf("R = %hd G = %hd B = %hd\n",red[i][j] , green[i][j] , blue[i][j]);
		}
	}

	printf("\nGrayscale values\n");
	for(int i = 0 ; i < 10 ; i++){
		for(int j = 0 ; j < 10 ; j++){
			gray[i][j] = (red[i][j] * 0.299) + (green[i][j] * 0.587) + (blue[i][j] * 0.114);
			printf("%hd, ", gray[i][j]);

		}
		printf("\n");
	}
	

	return 0;
}
