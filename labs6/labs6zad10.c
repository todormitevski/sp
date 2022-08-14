#include <stdio.h>

int main(){

    int n;
    scanf("%d", &n);
    int niza[100];
    for(int i=0;i<n;i++){
        scanf("%d", &niza[i]);
    }

    int k, temp[100], br=0;
    scanf("%d", &k);

    for(int i=0;i<n;i++){
        if(niza[i]<k){
            //temp[i]=niza[i];
            printf("%d ", niza[i]);
        }
    }

    for(int i=0;i<n;i++){
        if(niza[i]>k){
            //temp[i]=niza[i];
            printf("%d ", niza[i]);
        }
    }

    for(int i=0;i<n-1;i++){
        printf("%d ", temp[i]);
    }

    return 0;
}
