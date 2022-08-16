#include <stdio.h>
#include <string.h>

void podniza(char *str, char *str1){
    int flag=0;
    char temp[100];
    strcpy(temp,str);
    int brChar=strlen(str1);
    while(*str!='\0'){
        if(!strncmp(str,str1,brChar)){
            flag=1;
        }
        str++;
    }
    if(flag){
        printf("%s e podniza na %s", str1, temp);
    } else printf("%s ne e podniza na %s", str1, temp);
}

int main(){

    char s[100], s1[100];
    gets(s); //celoto
    gets(s1); //toa so go baras dali e podniza nz
    podniza(s,s1);

    return 0;
}