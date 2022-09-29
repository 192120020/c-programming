#include<stdio.h>
int main()
{
     void swap(int*, int*, int*);
     int a,b,c;
     //int *p,*q,*r;
     printf("Enter values of a, b and c \n");
     scanf("%d%d%d",&a,&b,&c);
     printf("Before\n");
     printf("a = %d\n",a);
     printf("b = %d\n",b);
     printf("c = %d\n",c);
     swap(&a,&b,&c);
     printf("\n\nAfter");
     printf("\n a = %d",a);
     printf("\n b = %d",b);
     printf("\n c = %d",c);
     
     return 0;
}
void swap(int *p, int *q, int *r)
 {
     *p=*p+*q+*r;;
     *q=*p-*q-*r;
     *r=*p-*q-*r;
     *p=*p-*q-*r;
     printf("\n Inside function");
     printf("\n After swapping their values are as below -");
     printf("\n a = %d",*p);
     printf("\n b = %d",*q);
     printf("\n c = %d",*r);
 }
