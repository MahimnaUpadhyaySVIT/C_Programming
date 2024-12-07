#include <stdio.h>
#include <ctype.h>
#define size 50

void LowerToUpper(char *name);

int main(){
    int i;
    char name[size];

    printf("Enter your good name: ");
    fgets(name, size, stdin);

    for(i=0; name[i]!='\0'; i++){
        if(name[i] == '\n'){
            name[i] = '\0';
        }
    }

    LowerToUpper(name);

    return 0;
}

void LowerToUpper(char *name){
    int i;

    for(i=0; name[i]!='\0'; i++){
        name[i] = toupper(name[i]);
    }

    printf("Your good name %s" , name);
}
