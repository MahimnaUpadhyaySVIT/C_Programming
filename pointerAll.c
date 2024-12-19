#include <stdio.h>
#define size 10

void pointerFunction(int *number1, int *number2);

struct person{
	int age;
	double weight;
}; struct person person_variable;

void main(){

	int number1, number2, i, age, number[size]={1,2,3,4,5};
	double weight;
	struct person *per = &person_variable;

	printf("Enter values of number1 and number2:");
	scanf("%d %d", &number1, &number2);

	pointerFunction(&number1, &number2);

	printf("number1 = %d \n", number1);
	printf("number2 = %d \n", number2);

	for(i=0; i<size; i++){
		printf("number array address %d and value %d \n", &number[i], number[i]);
	}

	printf("Enter your age and weight: ");
	scanf("%d %lf", &per->age, &per->weight);

	printf("Person age is %d and weight is %lf via pointer", per->age, per->weight);
}

void pointerFunction(int* number1, int* number2){
	int temp;
	temp = *number1;
	*number1 = *number2;
	*number2 = temp;
}
