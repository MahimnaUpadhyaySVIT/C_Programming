#include <stdio.h>
#include <ctype.h>
#define size 50

void main(){
    char name[size];
    int i;

    printf("Enter your name in lower case: ");
    gets(name);

    for(i=0; name[i]!= '\0'; i++){
        name[i] = toupper(name[i]);
    }

    printf("Your name in upper case: %s \n" , name);
}
