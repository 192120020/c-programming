#include<stdio.h>
#include<conio.h>
long int fact(int n);
int main()
{
int n;
printf("enter positive number\n");
scanf("%d",&n);
printf("fact of %d is %ld",n,fact(n));
getch();
return 0;
}
long int fact(int n)
{
long int f;
 if(n>=1)
 {
 f=n*fact(n-1);
 return f;
 }
 else
 return 1;
}

