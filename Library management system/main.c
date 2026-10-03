#include <stdio.h>
#include <stdlib.h>
struct Book {
    int id;
    char title[100];
    char author[100];
    int year;
};
struct Book books[100];
int bookCount=0;

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
}

    void displayBooks()
{
    if (bookCount == 0)
    {
        printf("\nNo books in the library.\n");
        return;
    }

    printf("\n========== BOOKS IN LIBRARY ==========\n");

    for (int i = 0; i < bookCount; i++)
    {
        printf("\nBook %d\n", i + 1);
        printf("ID: %d\n", books[i].id);
        printf("Title: %s\n", books[i].title);
        printf("Author: %s\n", books[i].author);
        printf("Year: %d\n", books[i].year);

    }
};
void searchBook(){
int id;
int found=0;

   printf("\nEnter Book id\n ");
   scanf("%d",&id);
   for(int i=0 ; i < bookCount ; i++){
    if(books[i].id == id){
        printf("\n=======Book Found========\n");
        printf("ID: %d\n", books[i].id);
        printf("ID: %d\n", books[i].id);
        printf("Title: %s\n", books[i].title);
        printf("Author: %s\n", books[i].author);
        printf("Year: %d\n", books[i].year);

            found = 1;
            break;
        }
    }

    if (found == 0)
    {
        printf("\nBook not found.\n");
    }
}
void modifyBook()
{
    int id;
    int found = 0;

    printf("\nEnter Book ID to modify: ");
    scanf("%d", &id);

    for (int i = 0; i < bookCount; i++)
    {
        if (books[i].id == id)
        {
            printf("\nBook found!\n");
            printf("Enter new title: ");
            scanf(" %[^\n]", books[i].title);
            printf("Enter new author: ");
            scanf(" %[^\n]", books[i].author);
            printf("Enter new publication year: ");
            scanf("%d", &books[i].year);

            found = 1;

            printf("\nBook modified successfully!\n");

            break;
        }
    }

    if (found == 0)
    {
        printf("\nBook not found.\n");
    }
}

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
       displayBooks();
        break;
    case 3:
        searchBook();
        break;
    case 4:
        modifyBook();
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




