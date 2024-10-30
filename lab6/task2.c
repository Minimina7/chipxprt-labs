#include<stdio.h>
#include<stdlib.h>

int main(){
	
	int i = 1;
	char character;
	char *sentence = (char*) malloc(sizeof(char));
	if (sentence == NULL){
		printf("Error can't allocate a memory\n");
		return 1;
	}
	printf("Please enter your sentence: ");

	while(character !='\n'){
		character = getc(stdin);
		
		sentence = (char*) realloc(sentence , i * sizeof(char));
		sentence[i-1] = character;
		i++;
	}
	//sentence[i] = '\0'
	char *Rsentence = (char*) malloc(i * sizeof(char));
	if (Rsentence == NULL){
		printf("Error can't allocate a memory\n");
		return 1;
	}
	printf("\nRevrese order \n");
	for(int j = 0; j <= i; j++){
		Rsentence[j] = sentence[i-j]; 
		printf("%c",Rsentence[j]);
		sentence = (char*) realloc(sentence , (i-j) * sizeof(char));
	}
	printf("\n");
	free(sentence);
	free(Rsentence);


	return 0;
}
