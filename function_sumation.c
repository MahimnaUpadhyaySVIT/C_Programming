#include <stdio.h>
void summation(int, int);

void main(){
    int range, num;

    printf("Enter the range: ");
    scanf("%d", &range);

    printf("Enter start of a number: ");
    scanf("%d", &num);

    summation(num, range);
}

void summation(int num, int range){
    int sum = 0, i;

    for(i=0; i<range; i++){
        sum = sum+num;
    }

    printf("The sum of %d is %d", num, sum);
}
