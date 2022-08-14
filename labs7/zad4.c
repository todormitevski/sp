#include <stdio.h>

int brNaCifri(int broj){
    int brCifri=0;
    while(broj){
        brCifri++;
        broj/=10;
    }
    return brCifri;
}

int obratenBroj (int broj){
    int brCifri= brNaCifri(broj);
    int obraten=0;
    while(broj){
        obraten=obraten*10+broj%10;
        broj/=10;
        brCifri--;
    }
    return obraten;
}

int sumaNaCifri (int broj){
    int sumBroj=0;
    while(broj){
        sumBroj+=broj%10;
        broj/=10;
    }
    return sumBroj;
}

void pecatiVoInterval (int a, int b){
    for(int i=a;i<=b;i++){
        int sumaBroevi=0;
        sumaBroevi=i+obratenBroj(i);
        int sumaCifri= sumaNaCifri(sumaBroevi);
        if(sumaBroevi%sumaCifri==0){
            printf("%d\n", i);
        }
    }
}

int main(){

    int a,b;
    scanf("%d %d", &a, &b);
    pecatiVoInterval(a,b);

    return 0;
}