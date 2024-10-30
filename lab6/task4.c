#include<stdio.h>
#include<stdlib.h>

int top = 0;
int *stack = NULL;

void push(){
	top++;
	stack = (int*) realloc(stack , (top) * sizeof(int));
	printf("Enter an integer to push: ");
	scanf("%d", &stack[top-1]);

}

void pop(){
	if(top == 0)
		printf("The stack is empty ");
	else{
		printf("Popped value: %d",stack[top-1]);
		top--;
		stack = (int*) realloc(stack , top * sizeof(int));
	}
	printf("\n");

}

void display(){
	printf("Current stack: ");
	if(top == 0)
		printf("Empty");
	else{
		for(int i = 0; i < top ; i++){
			printf(", %d",stack[i]);
		}
	}
	printf("\n");

}

int main(){
	int flag = 0;
	char choice;
	while(1){
		printf("Enter a command (p: push, o: pop, d: display, e: exit): ");
		scanf(" %c", &choice);
		
		switch(choice){
			case 'p':
				push();
				break;
			case 'o':
				pop();
				break;
			case 'd':
				display();
				break;
			case 'e':
				flag = 1;
				break;
			default:
				printf("Wrong input, Please try again\n");
		}
		if (flag > 0)
			break;
		}
	free(stack);

	return 0;

}
