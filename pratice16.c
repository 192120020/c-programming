#include<stdio.h>
int main()
{
int n,i,t,j,max=0,c=0;
float a[100];
float s=0,mean,median,mode=0;
printf("Enter how many data you want to input: ");
scanf("%d",&n);
printf("Enter %d Data:\n", n);
for(i=0; i<n; i++)
{
 scanf("%f",&a[i]);
 s=s+a[i];
} 
for(i=0;i<n;i++)
{
 for(j=0;j<n;j++)
 {
 if(a[i]<a[j])
 {
 t=a[i];
 a[i]=a[j];
 a[j]=t;
}
}
}

mean = s/(float)n;
printf("mean or average is: %.1f\n",mean);

if(n%2==0)
median=( (a[(n-1)/2] + a[(n-1)/2+1] ) / 2.0);
else
median=( (a[(n-1)/2]*2)/2);
printf("median is: %.1f\n", median);

for(i=0; i<n; i++)
{
t=a[i];
c=0;
for(j=0; j<n; j++) { if(t==a[j]) c++; if(c>max)
{
max=c;
mode=t;
}
}
}
printf("mode is %f",mode);
return 0;
}
