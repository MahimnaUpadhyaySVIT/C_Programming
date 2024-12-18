#include <stdio.h>

void main(){
    int mark;

    printf("Enter total marks: ");
    scanf("%d", &mark);

    if(mark<=100 && mark>=80) {
        printf("Marks \t Grade \n %d \t Distinction", mark);
    } else if(mark<=79 && mark>=60) {
        printf("Marks \t Grade \n %d \t First Class", mark);
    } else if(mark<=59 && mark>=40) {
        printf("Marks \t Grade \n %d \t Second Class", mark);
    } else {
        printf("Marks \t Grade \n %d \t Fail", mark);
    }
}
