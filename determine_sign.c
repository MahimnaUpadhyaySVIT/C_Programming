#include <stdio.h>

void main(){
    int num;

    printf("Enter any integer (-ve/0/+ve): ");
    scanf("%d", &num);

    if(num>0) {
        printf("%d is positive.", num);
    } else if(num<0) {
        printf("%d is negative.", num);
    } else {
        printf("%d is zero.", num);
    }
}
