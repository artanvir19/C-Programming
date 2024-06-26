#include<stdio.h>
#include<string.h>

struct books
{
    char title[50];
    char author[50];
    char subject[100];
    int book_id;
};

int main()
{
    struct books book1;
    struct books book2;

    strcpy(book1.title,"c Programming");
    strcpy(book1.author,"Nuha ali");
    strcpy(book1.subject,"C Programming Tutorial");
    book1.book_id=1234567890;

    strcpy(book2.title,"Telecom Billing");
    strcpy(book2.author,"Zara ali");
    strcpy(book2.subject,"Telecom billing tutorial");
    book2.book_id=987654321;


    printf("The book title is %s\n",book1.title);
    printf("The author of the book 1 is %s\n",book1.author);
    printf("book1 subject : %s\n",book1.subject);
    printf("book 1 book_id:%d\n\n\n",book2.book_id);


    printf("The book2 title is %s\n",book2.title);
    printf("The author of the book 2 is %s\n",book2.author);
    printf("book2 subject : %s\n",book2.subject);
    printf("book 2 book_id:%d",book2.book_id);

    void printbook;
}
