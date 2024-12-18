#include <stdio.h>

void main(){
    int total_marks;

    printf("Enter total_marks: ");
    scanf("%d", &total_marks);

    if(total_marks>33) {
        printf("Student passed!!");
    } else {
        printf("Student failed!!");
    }
}
