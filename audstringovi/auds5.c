#include <stdio.h>
#include <string.h>

void palindrom(char *str){
    int brChar=0;
    char temp[100];
    while(strlen(str)!='\0'){
        brChar++;
        str++;
    }
//    char temp[100];
//    for(int i=brChar-1;i>strlen(str)==0;i--){
//        for(int j=0;j<strlen(str);j++){
//            temp[i]=str[i];
//        }
//    }
//    if(strcmp(str,temp)){
//        printf("Palindrom e haha\n");
//    }
//
//    printf("%s", temp);

//    if(brChar%2==0){
        for(int i=brChar;i>strlen(str)/2;i--){
            //strcpy(temp1,str);
            temp[i]=str[i];
        }
        if(!strcmp(temp,str)){
            printf("Palindrom e haha");
        } else printf("Ne e palindrom lol");
    //}
//    else{
//
//    }
}

int main(){

    char s[100];
    gets(s);
    palindrom(s);

    return 0;
}