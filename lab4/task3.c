#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
	
	srand(time(NULL));
	unsigned short array[10][10];
	int xCoordinate = rand() % 10;
	int yCoordinate = rand() % 10;
	char flag = 0;
	
	array[xCoordinate][yCoordinate] = 99;

	for(int i = 0; i < 10; i++){
		for(int j = 0; j < 10 ; j++){
			printf("(%d,%d)\n", i, j);
			if (array[i][j] == 99){
				printf("Hurrah!, I have found the hidden treasure\n");
				printf("The treasure was found on (%d,%d) coordinate\n",i,j);
				flag++;
				break;
			}
		}
		if(flag > 0)
			break;
	}
	


	return 0;
}
