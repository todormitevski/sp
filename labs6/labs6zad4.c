#include <stdio.h>

int main(){

    int n, glavna=0, sporedna=0, prvaKol=0, vtoraKol=0;
    scanf("%d", &n);
    int matrix[100][100];

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d", &matrix[i][j]);
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j){
                glavna+=matrix[i][j];
            }
            if(i+j==n-1){
                sporedna+=matrix[i][j];
            }
            if(j==0){
                prvaKol+=matrix[i][j];
            }
            if(j==n-1){
                vtoraKol+=matrix[i][j];
            }
        }
    }

    int razlikaDijag=0, razlikaKol=0;
    razlikaDijag=glavna-sporedna;
    razlikaKol=prvaKol-vtoraKol;

    printf("%d\n", razlikaDijag);
    printf("%d", razlikaKol);

    return 0;
}