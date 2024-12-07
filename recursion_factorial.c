#include <stdio.h>

void main(){
    int number, range, i, factorial=1;

    printf("Enter the range: ");
    scanf("%d", &range);

    printf("Enter the number: ");
    scanf("%d", &number);

    for(i=0; i<range; i--){
        factorial = factorial * number;
    }

    printf("The factorial of a %d is %d", number, factorial);
}
