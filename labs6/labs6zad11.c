#include <stdio.h>

int main(){

    int n;
    scanf("%d", &n);
    int matrix[100][100];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d", &matrix[i][j]);
        }
    }

    int region1=0,region2=0,region3=0,region4=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i<(n-1)/2&&j<(n-1)/2){
                region1+=matrix[i][j];
            }
            if(i<(n-1)/2&&j>(n-1)/2){
                region2+=matrix[i][j];
            }
            if(i>(n-1)/2&&j<(n-1)/2){
                region3+=matrix[i][j];
            }
            if(i>(n-1)/2&&j>(n-1)/2){
                region4+=matrix[i][j];
            }
        }
    }

    printf("%d %d\n%d %d", region1, region2, region3, region4);

    return 0;
}