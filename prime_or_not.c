#include <stdio.h>

void main(){
    int number, i;

    printf("Enter a number: ");
    scanf("%d", &number);

    if(number == 0 || number == 1){
       printf("1");
    }

    for(i=0; i<=number/2; i++){
        if(number % i == 0){
            printf("1");
        } else {
            printf("0");
        }
    }
}
