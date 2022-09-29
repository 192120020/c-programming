#include <stdio.h>
int main()
{
int arr[100],sum=0;
float num=0;

  for (int i=1;i<6;i++){
  printf("Enter your mark ");
  scanf("%d",&arr[i]);
  sum+=arr[i];
   }
num=sum/5;
printf("the average of your marks is %.2f",num);
	if(num >= 80){
	printf(" You got A grade");
		}
	else if ( num >=60){ 
		printf(" You got B grade");
		}
	else if ( num >=40){
		printf(" You got C grade");
		}
	else if ( num < 40){
		printf(" You Failed in this exam");
		}
return 0;
}
