#include <stdio.h>

void main(){
    
    int i, rollno[20], marks[20];

    printf("Enter Rollno of Student and their marks respectively: \n");

    for(i=0; i<=20 && i<20; i++){
        scanf("%d %d", &rollno[i], &marks[i]);
    }
    
    for(i=0; i<=20 && i<20; i++){
        printf("Rollno %d got %d marks \n", rollno[i], marks[i]); 
    }

}
