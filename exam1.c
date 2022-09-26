#include<stdio.h>
#include<string.h>
int main()
{
	char str_1[100],str_2[100];
	printf("\nenter username=");
	scanf("%s",&str_1);
	printf("\nre-enter username=");
	scanf("%s",&str_2);
	if (strcmp(str_1,str_2)==0)
	{
	printf("\nusername is valid");}
	else
	{
	printf("\nusername is invalid");}
	return 0;
}
