#include<stdio.h>
int main(){
    int m,n;
    printf("input the row and column of the matrix:");
    scanf("%d %d",&m,&n);
    printf("input the Elements of the matrix:");
    int mat[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&mat[i][j]);
        }
    }
    printf("matrix after transpose become:\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("%d ",mat[j][i]);
        }
        printf("\n");
    }
    return 0;    
}