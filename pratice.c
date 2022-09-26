#include<stdio.h>
#include<math.h>
int main()
{
	int power,sum,sub,mult,div,a,b,opp;
	printf("\n1=sum\n2=sub\n3=mult\n4=div\n5=power\nenter the operator=");
	scanf("%d",&opp);
	switch(opp)
	{
		case 1:
		printf("\nenter a=");
		scanf("%d",&a);
		printf("\nenter b=");
		scanf("%d",&b);
		printf("\nsum=%d",sum=a+b);
		break;
		case 2:
		printf("\nenter a=");
		scanf("%d",&a);
		printf("\nenter b=");
		scanf("%d",&b);
		printf("sub=%d",sub=a-b);
		break;
		case 3:
		printf("\nenter a=");
		scanf("%d",&a);
		printf("\nenter b=");
		scanf("%d",&b);

		printf("\nmult=%d",mult=a*b);
		break;
		case 4:
		printf("\nenter a=");
		scanf("%d",&a);
		printf("\nenter b=");
		scanf("%d",&b);
		printf("\ndiv=%d",div=a/b);
		break;
		case 5:
		printf("\nenter a=");
		scanf("%d",&a);
		printf("\nenter power of a=");
		scanf("%d",&b);
		printf("\npower=%d",power=pow(a,b));
		break;
		default :
			printf("\nenter correct opption");
			break;	
	}
	return 0;
}
