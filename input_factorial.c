#include <stdio.h>

int main(){
	
	int input, range, factorial = 0, i;

	printf("Enter number: ");
	scanf("%d", &input);

	printf("Enter range: ");
	scanf("%d", &range);

	for(i=0 ; i<range; i++){
		factorial = factorial* input;
	}

	printf("factorial of %d is %d", input, factorial);

	return 0;
}
