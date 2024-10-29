#include<stdio.h>

int main(){
	
	int endian = 0x02000050;
	char *pointer = (char*) &endian;

	printf("%x\n", *pointer);
	printf("The device architecture is:\n%ld\n",sizeof(&endian) * 8);



	return 0;
}
