#include <stdio.h>
#include <stdlib.h>
struct Book {
    int id;
    char title[100];
    char author[100];
    int year;
};
struct Book books[100];
bookCount=0;

void addBook()
{
    struct Book book;
    printf("Enter Book ID:");
    scanf("%d",&books[bookCount].id);
    printf("\n Enter Book Title: \n ");
    scanf(" %[^\n]",books[bookCount].title);
    printf("\nEnter Book AUTHOR:\n");
    scanf(" %[^\n]",books[bookCount].author);
    printf("\nEnter publication year:\n");
    scanf("%d",&books[bookCount].year);
    bookCount++;
    printf("\n book added successfully!\n");
};
int main()
{
int choice;
do{
     printf("\n===========================\n");
     printf( "LIBRARY MANAGEMENT SYSTEME\n");
     printf("\n===========================\n");
     printf("1. ADD BOOK\n");
     printf("2. DISPLAY BOOK\n");
     printf("3. SEARCH BOOK\n");
     printf("4. MODIFY BOOK\n");
     printf("5. DELETE BOOK\n");
     printf("6. EXIT\n");
     printf("\n===========================\n");

     printf("ENTER YOUR CHOICE\n");
     scanf("%d",&choice);


     switch(choice){

    case 1:
      addBook();
        break;

    case 2:
        printf("DISPLAY BOOK\n");
        break;
    case 3:
        printf("SEARCH BOOK\n");
        break;
    case 4:
        printf("MODIFY BOOK");
        break;

    case 5:
        printf("Delete Book\n");
        break;
    case 6:
        printf("Goodbye!\n");
        break;

        default:
        printf("Invalid choice!\n");
             }
        } while(choice!=6);





return 0;
     }




