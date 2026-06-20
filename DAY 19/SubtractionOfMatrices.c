#include<stdio.h>
int main(){
    int m,n;
    printf("input the number of  row of  the matrices:");
    scanf("%d",&m);
    printf("input the number of  columns of  the matrices:");
    scanf("%d",&n);
    printf("input the elements of the matrices1:");
    int mat1[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&mat1[i][j]);
        }
    }
    printf("input the elements of the matrices2:");
    int mat2[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&mat2[i][j]);
        }
    }
    printf("Matrix After subtraction:\n");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("%d ",mat1[i][j]-mat2[i][j]);

        }
        printf("\n");
    }
    
    return 0;
}