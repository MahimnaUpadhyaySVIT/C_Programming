#include <stdio.h>

void main(){
    double area, height, base;

    printf("Enter value of Height and Base: ");
    scanf("%d %d", &height, &base);

    area = height * base * 0.5;

    printf("The area of a triangle whose height %d and base %d is %d", height, base, area);
}
