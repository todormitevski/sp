#include <stdio.h>
#include <string.h>

int main(){

    char s[100];
    int pozicija, dolzina;
    gets(s);
    scanf("%d %d", &pozicija, &dolzina);

    char start[100];
    strncpy(start,s+pozicija-1,dolzina);
    start[dolzina]='\0';
    printf("Rezultat: ");
    puts(start);

    return 0;
}