#include <stdio.h>
#include <stdlib.h>
struct Book {
    int id;
    char title[100];
    char author[100];
    int year;

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
     printf("6. EXIT\m");
     printf("\n===========================\n");

     printf("ENTER YUR CHOICE\n");
     scanf("%d",&choice);


     switch(choice){

    case 1:
        printf("ADD BOOK\n");
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




