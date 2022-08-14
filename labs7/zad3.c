#include <stdio.h>

void readMatrix(int a[100][100], int n, int m){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d", &a[i][j]);
        }
    }
}

int main(){

    int n,m;
    scanf("%d %d", &n, &m);
    int matrix[100][100];
    readMatrix(matrix,n,m);

    int min=99999;
    int kolSuma=0;
    int brKol=0;
//    int temp=0;
//    int flag=0;

    for(int j=0;j<n;j++){
        for(int i=0;i<m;i++){
            kolSuma+=matrix[j][i];
        }
        if(kolSuma==min){
            //temp=j;
            //flag=1;
            //break;
            printf("%d", kolSuma);
            return 0;
        }
        if(kolSuma<min){
            min=kolSuma;
            brKol=j;
        }
        kolSuma=0;
    }

//    if(flag){
//        printf("%d", temp);
//    } else
    printf("%d", brKol);

    return 0;
}