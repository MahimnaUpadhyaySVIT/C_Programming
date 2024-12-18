#include <stdio.h>

void main(){
    char character;

    printf("Enter a character: ");
    scanf("%c", &character);

    if(character>='a'&& character<='z') {
        printf("%c is a lowercase character", character);
    } else if(character>='A' && character<='Z') {
        printf("%c is a uppercase character", character);
    } else if(character>='0' && character<='9') {
        printf("%c is a number character", character);
    } else {
        printf("%c is a special symbol character", character);
    }
}
