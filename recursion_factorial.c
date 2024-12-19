#include <stdio.h>

int recursion_factorial(int);

void main(){
	int number, result;

	printf("Enter a number to find a factorial: ");
	scanf("%d", &number);
	
	if(number < 0){
		printf("Non negative number is not allowed");
	} else {
		result = recursion_factorial(number);
		printf("The factorial of %d is %d \n", number, result);
	}

}

int recursion_factorial(int number){
	
	int factorial=1, i;

	if(number == 0 || number == 1){
		return 1;
	}

	return factorial *= recursion_factorial(number - 1);

}
