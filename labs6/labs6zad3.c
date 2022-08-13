#include <stdio.h>
#define MAX 9999

int main(){

    int i,n,niza[MAX];
    scanf("%d", &n);

    for (i=0;i<n;i++){
        scanf("%d", &niza[i]);
        printf("%d ", niza[i]);
    }
    printf("\n");

    for (i=--n;i>=0;i--){
        printf("%d ", niza[i]);
    }
    printf("\n");

    for (i=n;i>=0;i-=2){
        printf("%d ", niza[i]);
    }
    printf("\n");

    if (n%2==0){
        for (i=0;i<=n;i+=2){
            printf("%d ", niza[i]);
        }
    }
    else{
        for (i=1;i<=n;i+=2){
            printf("%d ", niza[i]);
        }
    }

    return 0;
}