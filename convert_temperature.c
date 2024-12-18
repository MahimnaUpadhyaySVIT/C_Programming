#include <stdio.h>

void main(){
    double fahrenheit, centigrade;

    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", fahrenheit);

    centigrade = fahrenheit - 32 * 5/9;
    
    printf("The temperature %d is %d in centigrade.", fahrenheit, centigrade);
}
