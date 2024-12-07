#include <stdio.h>
#include <string.h>
#define size 50

void main(){    
    char name[size], temp;
    int i, j, length;

    printf("Enter your name: ");
    gets(name);

    length = strlen(name);

    for(i=0, j=length-1; i<j; i++,j--){
        temp = name[j];
        name[i] = name[j];
        name[j] = temp;
    }

    printf("Reversed String: %s \n", name);
}
