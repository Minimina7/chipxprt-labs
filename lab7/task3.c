#include<stdio.h>
#include<math.h>

int main(){

	char ch;
	FILE *fp;
	FILE *fp1;

	fp = fopen("./files/bitstream.bit", "rb");
	if (fp == NULL) {
    		perror("Can't read the file");
		return 1;
	}
	fp1 = fopen("bitstream.hex", "w");
	if (fp1 == NULL) {
    		printf("Cannot open file\n");
   		return 1;
		}

	unsigned char bits = 0;
	int counterForBits = 0;
	int counter = 0;
	while ((ch = fgetc(fp)) != EOF) {

		if(ch == '0'){
			bits = bits >> 1 | 0x00;
			counterForBits++;
			counter++;
		}
		else if (ch == '1'){
			bits = bits >> 1 | 0x80;
			counterForBits++;
			counter++;
		}
		if(counterForBits >= 8){
		fprintf(fp1,"The hex = %02x\n",bits);
		bits = 0;
		counterForBits = 0;
		}
	}
	bits = bits >> 8 - (counter % 8);
	fprintf(fp1,"The hex = %02x\n",bits);
	fclose(fp);
	fclose(fp1);
	return 0;

}
