#include<stdio.h>
int main(){
	void modify(int*);
	int a =5;
	modify(&a);
}
void modify(int*p)
{
	printf("%d",*p*6);

  return 0;
}
