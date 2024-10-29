#include<stdio.h>

int StringLength(char *sentence){
	unsigned short length = 0;
	
	for(int i = 0; i < 100; i++){
		if( sentence[i] != '\0')
			length++;
		else{
			break;
		}
	}
	return length;
}

int NumOfWords(char *sentence, int length){
	unsigned short word = 0;

	for(int i = 0; i < length; i++){
		if( sentence[i] == ' ')
			word++;
	}
	return word+1;
}

int NumberOfVowels(char *sentence, int length){
	unsigned short vowel = 0;
	
	for(int i = 0; i < length; i++){
		if (sentence[i] == 'A' || sentence[i] == 'a' || sentence[i] == 'E' || sentence[i] == 'e' || sentence[i] == 'I' ||sentence[i] == 'i' || sentence[i] == 'O' || sentence[i] == 'o' || sentence[i] == 'U' || sentence[i] == 'u')

			vowel++;
	}
	return vowel;
}

int VowelFreq(char *sentence, char vowel , int length){
	unsigned short freq = 0;
	char upperCase = vowel - 32;
	
	for(int i = 0; i < length ; i++){
		if(sentence[i] == vowel || sentence[i] == upperCase)
			freq++;
	}
	return freq;
}

int main(){
	char sentence[100];
	printf("Please enter your sentence: ");
	scanf("%[^\n]s",sentence);
	int length = StringLength(sentence);
	printf("The length of the sentence: %d\n",length);
	printf("The number of word = %d\n",NumOfWords(sentence,length));
	printf("The number of vowels = %d\n",NumberOfVowels(sentence , length));
	printf("The frequncy of vowel a = %d\n",VowelFreq(sentence , 'a',length));
	printf("The frequncy of vowel e = %d\n",VowelFreq(sentence , 'e',length));
	printf("The frequncy of vowel i = %d\n",VowelFreq(sentence , 'i',length));
	printf("The frequncy of vowel o = %d\n",VowelFreq(sentence , 'o',length));
	printf("The frequncy of vowel u = %d\n",VowelFreq(sentence , 'u',length));
	return 0;

}


