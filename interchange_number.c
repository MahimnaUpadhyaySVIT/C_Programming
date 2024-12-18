#include <stdio.h>

void main(){
    int a, b, temp;

    a = 5;
    b = 10;

    printf("Number before swap a=%d b=%d", a,b);

    temp = b;
    b = a;
    a = temp;

    printf("Number after swap a=%d b=%d", a, b);
}
