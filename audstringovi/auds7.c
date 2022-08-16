#include <stdio.h>
#include <string.h>
#include <ctype.h>

void lowerUpper(char *str){
    char temp[100];
    for(int i=0;i<strlen(str);i++){
        if(isupper(str[i])){
            temp[i]=tolower(str[i]);
        } else if(islower(str[i])){
            temp[i]=toupper(str[i]);
        }
        if(isdigit(str[i]) && ispunct(str[i])){
            temp[i]='\0';
        }
    }
        printf("%s", temp);
}

int main(){

    char s[100];
    gets(s);
    lowerUpper(s);

    return 0;
}