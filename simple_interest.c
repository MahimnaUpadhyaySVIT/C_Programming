#include <stdio.h>

void main(){
    int number_of_years, principal_amount;
    double rate_of_interest, simple_interest;

    printf("Enter investment amount: ");
    scanf("%d", &principal_amount);

    printf("Enter duration of investment: ");
    scanf("%d", &number_of_years);

    printf("Enter rate of interest: ");
    scanf("%f", &rate_of_interest);

    simple_interest = ((principal_amount * rate_of_interest * number_of_years) / 100 );

    printf("The Simple Interest is %d ", &simple_interest);
}
