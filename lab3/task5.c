#include<stdio.h>

int main(){

	unsigned short numberOfCharacters = 0;
	unsigned short frequencyA = 0;
	unsigned short frequencyE = 0;
	unsigned short frequencyI = 0;
	unsigned short frequencyO = 0;
	unsigned short frequencyU = 0;
	unsigned short frequencyOther = 0;
	char character;

	printf("Please enter number of characters: ");
	scanf("%hd",&numberOfCharacters);

	for(unsigned short i = 1; i <= numberOfCharacters ; i++){
		printf("Enter the character number %hd: ", i);
		scanf(" %c", &character);
		
		if(character == 'a' || character == 'A')
			frequencyA++;
		else if(character == 'e' || character == 'E')
			frequencyE++;
		else if(character == 'i' || character == 'I')
			frequencyI++;
		else if(character == 'o' || character == 'O')
			frequencyO++;
		else if(character == 'u' || character == 'U')
			frequencyU++;
		else{
			frequencyOther++;
		}

	}

	printf("Frequency of a = %hd\n",frequencyA);
	printf("Frequency of e = %hd\n",frequencyE);
	printf("Frequency of i = %hd\n",frequencyI);
	printf("Frequency of o = %hd\n",frequencyO);
	printf("Frequency of u = %hd\n",frequencyU);
	printf("Frequency of others = %hd\n",frequencyOther);

	return 0;
}
