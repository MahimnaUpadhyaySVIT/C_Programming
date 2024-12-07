#include <stdio.h>

void main(){
    int sum, difference, product, division, num1, num2;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    sum = num1+num2;
    difference = num1-num2;
    product = num1*num2;
    division = num1/num2;

    printf("The sum is %d \n", sum);
    printf("The difference is %d \n", difference);
    printf("The product is %d \n", product);
    printf("The division is %d \n", division);
}
