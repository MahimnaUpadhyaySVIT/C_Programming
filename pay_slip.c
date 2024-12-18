#include <stdio.h>

void main(){
    int basic, Da=10, Ma=300;
    double Hra=7.50, Pf=12.50, Gross, Nt;

    printf("Enter your salary:");
    scanf("%d", &basic);

    Gross = basic + Da + Hra + Ma;
    Nt = Gross - Pf;

    printf("The Gross Salaray \t Net Salary \n %f \t %f", Gross, Nt);
}
