#include <stdio.h>

int dolzinaString(char *str){
    int dolzina=0;
    while(*str!='\0'){
        dolzina++;
        str++;
    }
    return dolzina;
}

int main(){

    char s[100];
    gets(s);
    printf("Dolzinata na stringot e: %d", dolzinaString(s));

    return 0;
}