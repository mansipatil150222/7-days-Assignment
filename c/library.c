/* Write a function that receives marks received by a student in 3 subjects and returns the total and percentage of these marks. Call this function from main( ) and print the results in main( ). */
#include <stdio.h>
#include <string.h>

//Count total number of books in the library
int count();

void display(int);

//If the author name is same so the function strcmp returns a zero
void giv_author(char *);
void adbuk();

//Appears the title of the specified book
void which1(int);

//Displays all the books serially accession number
void albuk();

struct library{
    int an; /*Accession number*/
    char title[50];
    char author[30];
    int price;
    int flag; /*flag = 0 : Issued and,flag = 1: not issued*/
} geclib[50] = {
    1, "c Programming", "Writer ABC", 400, 1,
    2, "Data Structure", "Writer XYZ", 500, 1,
    3, "Linux Fundamental", "Writer ABC", 600, 1,
    4, "cpp", "Writter PQR", 700, 0,
    5, "OOP", "Writter PQR", 200, 0};
int main(){
    int ans = 1, an;
    char auth[30];
    while (ans != 7){
        printf("\nYou are in menu section");
        printf("\n1. Add Book Information \n2. Display Book Information \n3. List all books of given author");
        printf("\n4. List the title of specified book \n5. List the counts of the books in library");
        printf("\n6. List the books in order of accession number \n7. Exit");
        printf("\nEnter you choice : ");
        scanf("%d", &ans);
        switch (ans)
        {
        case 1:
		//add book info
            adbuk();
            break;
        case 2:
		//display book info
            printf("\nEnter the accession number of the book : ");
            scanf("%d", &an);
            display(an);
            break;
        case 3:

            while (getchar() != '\n');
            printf("Enter the name of the author (case sensitive) : ");
            gets(auth);
            giv_author(auth);
            break;
        case 4:
            printf("\nEnter the accession number of book : ");
            scanf("%d", &an);
            which1(an);
            break;
        case 5:
            printf("\nTotal Number of books : %d", count());
            break;
        case 6:
            albuk();
            break;
        case 7:
            return 0;
        default:
            printf("\nWrong choice, Try Again!!");
        }
    }
    return 0;
}
int count(){
    int i = 0;
    while (geclib[i].an)
        i++;
    return i;
}
void display(int i){
    i--; //To use i as index
    printf("\n\n\n");
    printf("\nAccession Number : %d", geclib[i].an);
    printf("\nTitle : %s", geclib[i].title);
    printf("\nAuthor : %s", geclib[i].author);
    printf("\nPrice : %d", geclib[i].price);
    if (geclib[i].flag) //Flag : 0*
        printf("\nStatus : Issued");
    else
        printf("\nStatus : Available"); //Flag : 1
}
void giv_author(char *author){
    int i = 0;
    printf("\nBooks of \"%s\" are following : \n\n", author);
    while (geclib[i].an)
    {
        if (!(strcmp(author, geclib[i].author)))
            display(geclib[i].an);
        i++;
    }
}
void adbuk(){
    int next = count();
    geclib[next].an = next + 1;
    //fflush(stdin) or while(getch() != '\n'); to clear the buffer
    while (getchar() != '\n');
    printf("\nEnter the title of the book : ");
    gets(geclib[next].title);
    printf("\nEnter the author name of the book : ");
    gets(geclib[next].author);
    printf("\nEnter the price of the book : ");
    scanf("%d", &geclib[next].price);
    geclib[next].flag = 1;
    system("cls");
}
void which1(int an){
    int i = 0;
    while (geclib[i].an)
    {
        if (geclib[i].an == an)
        {
            printf("\n\nTitle of the book : %s\n", geclib[i].title);
            return;
        }
    }
    printf("No any book found found\n");
}
void albuk(){
    int i = 0;
    while (geclib[i].an)
    {
        display(i + 1);
        i++;
    }
}
