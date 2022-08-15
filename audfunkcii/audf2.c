#include <stdio.h>

int zbirDvaBroja(int n){
    return n%100+n/100;
}

int main(){

    int br=0;
    for(int i=1000;i<=9999;i++){
        if(i% zbirDvaBroja(i)==0){
            printf("%d\n", i);
            br++;
        }
    }

    printf("Vkupno takvi se: %d", br);

    return 0;
}