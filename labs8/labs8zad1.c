#include <stdio.h>

int opagja(int broj){
    int flag=1;
    while(broj){
        if(!broj%10<(broj%100)/10){
            flag=0;
        }
        broj/=10;
    }
    return flag;
}

/*
int opagja(int broj){

    int flag=1;
    if(!broj%10<(broj%100)/10){
        flag=0;
        return flag;
    }
    opagja(broj/10);
}
*/

int main(){

    int n, broj, rezultat;
    scanf("%d", &n);
    for(int i=0;i<n;i++){
        scanf("%d", &broj);
        rezultat=opagja(broj);
        printf("%d\n", rezultat);
    }

    return 0;
}