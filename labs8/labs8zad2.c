#include <stdio.h>

int kolkuCifren(int broj){
    int br=0;
    while(broj){
        br++;
        broj/=10;
    }
    return br;
}

void pogolemiOdKAndZbir(int broj, int k){
    int brCifri=kolkuCifren(broj);
    while(broj) {
        if (broj / brCifri > k) {
            printf("%d", broj % 10);
        }
        brCifri--;
        broj /= 10;
    }
}

int zbirCifri(){

}

int main(){

    int k,n,broj;
    scanf("%d", &k);
    scanf("%d", &n);
    for(int i=0;i<n;i++){
        scanf("%d", &broj);
    }

    return 0;
}