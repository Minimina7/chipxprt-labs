#include<stdio.h>

int main(){

	unsigned short initialPosition1 = 0;
	unsigned short initialPosition2 = 0;
	char direction;

	printf("You boundry is (4x4)\n");
	printf("Enter x coordinate the number should be between 1-4: ");
	scanf("%hd", &initialPosition1);
	printf("Enter y coordinate the number should be between 1-4: ");
	scanf("%hd", &initialPosition2);

	while(1){
		if(initialPosition1 > 4 || initialPosition1 < 1 || initialPosition2 > 4 || initialPosition2 < 1 )
			break;
		printf("You position is (%hd,%hd)\n",initialPosition1 , initialPosition2);
		printf("Where do you want to move? (W for uppar , S for down , A for left , D for right): ");
		scanf(" %c", &direction);
		
		switch (direction){
			case 'W':
				initialPosition1 -= 1;
				break;
			case 'S':
				initialPosition1 += 1;
				break;
			case 'A':
				initialPosition2 -= 1;
				break;
			case 'D':
				initialPosition2 += 1;
				break;
			default:
				printf("Wrong input please try again\n");
		}
	}
	printf("You reach out of boundry, Your last position is (%hd,%hd)\n",initialPosition1 ,initialPosition2);

	return 0;
}
