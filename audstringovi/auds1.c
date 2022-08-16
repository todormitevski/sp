#include <stdio.h>

int countChar(char *str, char c){ //niza od charovi (string), zatoa * ima
    int vk=0;
    while(*str!='\0'){ //se dodeka ne stasa do nultiot char na stringot, ke vrti whileot
        if(*str==c){
            vk++;
        }
        str++;
    }
    return vk;
}

int main(){

    char s[100];
    char c;
    gets(s); //vnesuva string
    c=getchar(); //vnesuva karakter

    printf("%d\n", countChar(s,c));

    return 0;
}