#include <stdio.h>
#include <stdlib.h>

int main()
{

    int n,m,br;
    scanf("%d %d", &n,&m);
    int matrix[n+1][m+1];

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d", &matrix[i][j]);
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(matrix[i][j]==1){
                printf("* ");
            } else if(matrix[i][j]==0){
                br=0;
                if(matrix[i-1][j-1]==1){
                    br++;
                }
                if(matrix[i-1][j]==1){
                    br++;
                }
                if(matrix[i-1][j+1]==1){
                    br++;
                }
                if(matrix[i][j-1]==1){
                    br++;
                }
                if(matrix[i][j+1]==1){
                    br++;
                }
                if(matrix[i+1][j-1]==1){
                    br++;
                }
                if(matrix[i+1][j]==1){
                    br++;
                }
                if(matrix[i+1][j+1]==1){
                    br++;
                }
                printf("%d ", br);
            }
        }
        printf("\n");
    }

    return 0;
}

/*
int main()
{
  int m,n,br;
  int a[100][100];
  scanf("%d %d",&n,&m);

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      scanf("%d",&a[i][j]);
    }
  }

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      if (a[i][j] == 1) {
        printf("* ");
      }
      else if(a[i][j]==0){
        br=0;
        if(a[i-1][j-1]==1){
            br++;
        }
        if(a[i][j-1]==1){
            br++;
        }
        if(a[i-1][j]==1){
            br++;
        }
        if(a[i+1][j+1]==1){
            br++;
        }
        if(a[i][j+1]==1){
            br++;
        }
        if(a[i+1][j]==1){
            br++;
        }
        if(a[i-1][j+1]==1){
            br++;
        }
        if(a[i+1][j-1]==1){
            br++;
        }
        printf("%d ", br);
      }
    }
      printf("\n");
}



  return 0;

}
 */