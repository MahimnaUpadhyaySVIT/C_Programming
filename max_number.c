#include <stdio.h>

void main(){
    int num1, num2, num3;

    printf("Enter the values of Num1, Num2, Num3: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    if(num1>num2) {
        printf("%d is greater than %d", num1, num2);
        
        if(num1>num3) {
            printf("%d is greater than %d and %d", num1, num2, num3);
        } else {
            printf("%d is greater than %d and %d", num3, num1, num2);
        }
    } else if(num2>num3) {
        printf("%d is greater than %d and %d", num2, num3, num1);
    } else {
        printf("%d is greater than %d and %d", num3, num2, num1);
    }
}
