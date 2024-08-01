#include<stdio.h>
#include<string.h>
typedef struct Books
{
    char title[50];
    char auther[50];
    char subject[50];
    int book_id;
}Book;
int main()
{
    Book books;
    Book book;
    strcpy(book.title,"C programming");
    strcpy(book.auther,"Nandan BU");
    strcpy(book.subject,"C programming tutorial");
    book.book_id=41236790;
    printf("Book title : %s\n",book.title);
    printf("Book auther: %s\n",book.auther);
    printf("Book subject: %s\n",book.subject);
    printf("Book book_id:  %d\n",book.book_id);
    return 0;
}
