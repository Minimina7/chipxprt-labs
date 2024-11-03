#include<stdio.h>
typedef struct {

	unsigned int ID;
	char name[50];
	float GPA;
}student;

int main(){
	
	unsigned short number = 0;
	printf("Enter the number of students: ");
	scanf("%hd", &number);
	student students[number];
	
	for(int i = 0; i < number; i++){
		printf("Enter ID for student %d: ",i+1);
		scanf("%d", &students[i].ID);
		printf("Enter name for student %d: ",i+1);
		scanf("%s", students[i].name);
		printf("Enter GPA for student %d: ",i+1);
		scanf("%f", &students[i].GPA);
	}
	printf("\nStudent Records:\n");

	for(int i = 0; i < number ; i++){
		printf("ID: %d, Name: %s, GPA: %.2f\n",students[i].ID , students[i].name , students[i].GPA);
	}
	return 0;
}
