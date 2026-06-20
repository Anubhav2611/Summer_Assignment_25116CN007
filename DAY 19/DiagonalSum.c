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
    int sum=0;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(i==j){
                sum+=mat[i][j];
            }
        }
    }printf("Sum of  the Diagonal Elements is:%d",sum);
    return 0;
}
