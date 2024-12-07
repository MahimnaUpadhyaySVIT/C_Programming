#include <stdio.h>

void main(){
    int one_d[5], i, max;

    printf("Enter the elements in a Array: \n");

    for(i=0; i<5; i++){
        scanf("%d", &one_d[i]);
    }

    printf("Elements in a Array: \n");

    for(i=0; i<5; i++){
        printf(" %d ", one_d[i]);
    }

    max = one_d[0];

    for(i=0; i<5; i++){
        if(one_d[i]>max){
            max = one_d[i];
        }
    }

    printf("The highest element in a array is: %d \n", max);
}
