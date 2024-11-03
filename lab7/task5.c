#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct {
	int bookID;
	char title[100];
	char author[50];
	int year;
	float price;
}book;

book books[100];
int N = 0;

void loadBookData(){
	FILE *fp = fopen("book.dat","r");
	if(fp == NULL){
		perror("Error finding the book.dat file");
		exit(-1);
	}
    	while (fscanf(fp, "%d %99s %49s %d %f",&books[N].bookID, books[N].title, books[N].author, &books[N].year, &books[N].price) == 5) {
        	N++;
    }
        fclose(fp);
}

void saveBookData(){
	FILE *fp = fopen("book.dat","w+");
	if(fp == NULL){
		perror("Error finding the book.dat file");
		exit(-1);
	}
	for (int i = 0; i < N; i++) {
            	fprintf(fp, "%d %s %s %d %.2f\n",books[i].bookID, books[i].title, books[i].author, books[i].year, books[i].price);
        }
        fclose(fp);
}
void inputBookData(){
	book newBook;
    	printf("Enter Book ID: ");
    	scanf("%d", &newBook.bookID);

    	printf("Enter Title: ");
    	scanf(" %[^\n]s",newBook.title);
    	strcspn(newBook.title, "\n");  

    	printf("Enter Author: ");
    	scanf(" %[^\n]s", newBook.author);
    	strcspn(newBook.author, "\n");

	printf("Enter Year: ");
    	scanf("%d", &newBook.year);

    	printf("Enter Price (SAR): ");
    	scanf("%f", &newBook.price);

    	books[N] = newBook;
	N++;
	saveBookData();
}

void displayBookData(){
	printf("Book Details:\n");
	for (int i = 0; i < N; i++) {
	        printf("Book ID: %d, Title: %s, Author: %s, Year: %d, Price: %.2f SAR\n", books[i].bookID, books[i].title, books[i].author, books[i].year, books[i].price);
    	}
}

void findBookByID() {
	int id;
	int flag = 0;
    	printf("Enter Book ID to search: ");
    	scanf("%d", &id);

    	for (int i = 0; i < N; i++) {
        	if (books[i].bookID == id) {
            		printf("Book ID: %d\nTitle: %s\nAuthor: %s\nYear: %d\nPrice: %.2f SAR\n", books[i].bookID, books[i].title, books[i].author, books[i].year, books[i].price);
        		flag++;
		}
    	}
	if (flag < 1)
		printf("Book not found\n");
}

void calculateTotalValue() {
 	float totalValue = 0.0;
    	for (int i = 0; i < N; i++) {
        	totalValue += books[i].price;
    	}
    	printf("Total Value of Books: %.2f SAR\n", totalValue);
}

int main(){
	
	loadBookData(); 
	int choice;
	int flag = 0;
	printf("Loading existing data from books.dat...");

	while (1) {
        	printf("\nLibrary Management System:\n");
        	printf("1. Add a book\n");
        	printf("2. Display all books\n");
        	printf("3. Search for a book by ID\n");
        	printf("4. Calculate total value of books\n");
        	printf("5. Exit\n");
        	printf("Enter your choice: ");
        	scanf("%d", &choice);

		switch (choice) {
           	case 1:
                	inputBookData();
                	break;
            	case 2:
                	displayBookData();
                	break;
            	case 3:
                	findBookByID();
                	break;
            	case 4:
                	calculateTotalValue();
                	break;
            	case 5:
                	printf("Saving Data to Books.dat and Exiting ...\n");
			saveBookData();
			flag = 1;
                	break;
            	default:
                	printf("Invalid choice! Please enter a valid option.\n");
        }
		if (flag == 1)
			break;
    }

    return 0;
}
