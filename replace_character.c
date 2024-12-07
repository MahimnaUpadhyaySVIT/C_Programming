#include <stdio.h>
#include <string.h>
#define size 30

void main(){
    int i;
    char str[size], Character_To_Replace, Character_After_Replace;

    printf("Enter your name: ");
    gets(str);

    printf("Enter a character to replace: ");
    scanf("%c", &Character_To_Replace);
    getchar();

    printf("Enter a character which should be added: ");
    scanf("%c", &Character_After_Replace);

    for(i=0; str[i] !='\0'; i++){
        if(str[i] == Character_To_Replace){
            str[i] = Character_After_Replace;
        }
    }

    printf("Modified Name: %s \n" , str);
}
