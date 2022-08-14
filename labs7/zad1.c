#include <stdio.h>

void printArray(int array[], int i){
    printf("%d ", array[i]);
}

int main(){

    int i,n,niza[100];
    scanf("%d", &n);

    for (i=0;i<n;i++){
        scanf("%d", &niza[i]);
        printArray(niza,i);
    }
    printf("\n");

    for (i=--n;i>=0;i--){
        printArray(niza,i);
    }
    printf("\n");

    for (i=n;i>=0;i-=2){
        printArray(niza,i);
    }
    printf("\n");

    if (n%2==0){
        for (i=0;i<=n;i+=2){
            printArray(niza,i);
        }
    }
    else{
        for (i=1;i<=n;i+=2){
            printArray(niza,i);
        }
    }

    return 0;
}