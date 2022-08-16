#include <stdio.h>
#include <string.h>
#include <ctype.h>

void validenPW(char *pass){
    int alpha=0, digit=0, punct=0;
    char temp[100];
    strcpy(temp,pass);
//    while(strlen(pass)!='\0'){
//        if(isalpha(pass)){
//
//        }
//        pass++;
//    }
    for(int i=0;i<strlen(pass);i++){
        if(isalpha(pass[i])){
            alpha++;
        }
        if(isdigit(pass[i])){
            digit++;
        }
        if(ispunct(pass[i])){
            punct++;
        }

    }
    if(alpha&&digit&&punct){
        printf("%s e validna lozinka", temp);
    } else printf("%s ne e validna lozinka", temp);
}

int main(){

    char pw[100];
    gets(pw);
    validenPW(pw);

    return 0;
}