#include<stdio.h>
#include<stdlib.h>

int word;
int character;
int lines;
int end = 1;

void NumOfWords(char sentence){
		if (sentence == ' ' || sentence == '\n'|| sentence == '\t') 
        		end = 1; 
		else if (end == 1) {
		        word++;
        		end = 0;
 			   }
		if(sentence != ' '|| sentence !='\n')
			character++;
		if(sentence == '\n')
			lines++;

}

int main(){
	
	FILE *fp;
	fp = fopen("./files/task2test.txt", "r");
	if (fp == NULL) {
    		perror("File not found");
		return 1;
	}
	char text;

	while ((text = fgetc(fp)) != EOF) {
		NumOfWords(text);
	}

	printf("Number of word = %d\nNumber of character = %d\nNumber of lines = %d\n",word , character, lines); 
	fclose(fp);	
	return 0;
}
