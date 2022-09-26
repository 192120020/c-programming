#include <stdio.h>
int main() {
	int p, q, r, s;
		    
    printf("\nInput the first integer: "); 
    scanf("%d", &p);
    printf("\nInput the second integer: ");
    scanf("%d", &q);
    printf("\nInput the third integer: ");
    scanf("%d", &r);
    printf("\nInput the fourth integer: ");
    scanf("%d", &s);

	if((q > r) && (s > p) && ((r+s) > (p+q)) && (r > 0) && (s > 0) && (p%2 == 0))
	 {
		printf("\nCorrect values\n");
	} 
	else {
		printf("\nWrong values\n");
	}
	return 0;
}
