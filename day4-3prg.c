#include<stdio.h>

#include<conio.h>

#include<string.h>

#define SIZE 20

struct bookdetail

{

          char title[20];

          char author[20];

          int subject;

          float book_id;

};

void output(struct bookdetail v[],int n);

void main()

{

          struct bookdetail b[SIZE];

          int n,i;

          printf("Enter the Numbers of Books:");

          scanf("%d",&n);

          printf("\n");

          for(i=0;i<n;i++)

          {

                   printf("\t=:Book %d Detail:=\n",i+1);

                   printf("\nEnter the Book title:\n");

                   scanf("%s",b[i].title);

                   printf("Enter the Author of Book:\n");

                   scanf("%s",b[i].author);

                   printf("Enter the subject of Book:\n");

                   scanf("%d",&b[i].subject);

                   printf("Enter the book_id of Book:\n");

                   scanf("%f",&b[i].book_id);

          }

          output(b,n);

          getch();

}

void output(struct bookdetail v[],int n)

{

          int i,t=1;

          for(i=0;i<n;i++,t++)

          {

                    printf("\n");

                   printf("Book No.%d\n",t);

                   printf("\t\tBook %d title is=%s \n",t,v[i].title);

                   printf("\t\tBook %d Author is=%s \n",t,v[i].author);

                   printf("\t\tBook %d subject is=%d \n",t,v[i].subject);

                   printf("\t\tBook %d book-id is=%f \n",t,v[i].book_id);

                    printf("\n");

          }

}
