#include<stdio.h>
#include<stdlib.h>

void decrypt(char *text) {
	for (int i = 0; text[i] != '\0'; i++) {
		char ch = text[i];
        
        	if (ch >= 'A' && ch <= 'Z') {
            		text[i] = (ch - 'A' + 3) % 26 + 'A';
        	} 
		else if (ch >= 'a' && ch <= 'z') {
            		text[i] = (ch - 'a' + 3) % 26 + 'a';
        	}
    	}
    	printf("Decrypted message: %s\n", text);
}

void encrypt(char *text) {
	FILE *fpWrite = fopen("Encrypt.txt","w");
		if (fpWrite == NULL) {
			perror("Error Writing on the file\n");
			exit(-1);
		}
    for (int i = 0; text[i] != '\0'; i++) {
        char ch = text[i];
        
        if (ch >= 'A' && ch <= 'Z') {
            text[i] = (ch - 'A' - 3 + 26) % 26 + 'A';
        } 
	else if (ch >= 'a' && ch <= 'z') {
            text[i] = (ch - 'a' - 3 + 26) % 26 + 'a';
        }
    }
	printf("Encrypted message: %s\n", text);
	fprintf(fpWrite,"%s\n", text);
	fclose(fpWrite);
}

int main(){
	char text[256];
	char fileName[100];
	FILE *fpRead;
	char choice1;
	char choice2;

	printf("Welcome to the Caesar Cipher Program!\n\n");
	printf("Do you want to perform (E)ncryption or (D)ecryption? ");
	scanf(" %c", &choice1);
	
	if (choice1 == 'E' || choice1 == 'e'){
		printf("Do you want to encrypt data from a (F)ile or enter a (S)tring? ");
		scanf(" %c", &choice2);
		switch(choice2){
		case 'S':
			printf("Please enter the string to encrypt: ");
			scanf(" %[^\n]s", text);
			encrypt(text);
			break;
		case 'F':
			printf("Please enter the filename to encrypt: ");
			scanf(" %s", fileName); 
			fpRead = fopen(fileName,"r");
			if (fpRead == NULL) {
        			perror("Error opening the file\n");
        			return 1;
   			}
			fgets(text, 256, fpRead);
			encrypt(text);
			break;
		default:
			printf("Error wrong choice\n");
		}
	}
	else if(choice1 == 'D' || choice1 == 'd'){
		printf("Do you want to encrypt data from a (F)ile or enter a (S)tring? ");
		scanf(" %c", &choice2);
		switch(choice2){
		case 'S':
			printf("Please enter the string to decrypt: ");
			scanf("%[^\n]s", text);
			break;
		case 'F':
			printf("Please enter the filename to decrypt: ");
			scanf(" %s", fileName); 
			fpRead = fopen(fileName,"r");
			if (fpRead == NULL) {
        			perror("Error opening the file\n");
        			return 1;
   			}
			fgets(text, 256, fpRead);
			decrypt(text);
			break;
		default:
			printf("Error wrong choice\n");
		}
	}

	else{
		printf("Error wrong choice \n");
	}
	fclose(fpRead);
	return 0;
}
