#include <stdio.h>

void main(){
    int km, meter;
    double feet, inche;

    printf("Enter the distance: ");
    scanf("%d", &km);

    meter = km * 1000;
    feet = km * 3280.84;
    inche = km * 39370.1;

    printf("The distance in \n meter:%d \n feet:%d \n inches:%d", meter, feet, inche);
}
