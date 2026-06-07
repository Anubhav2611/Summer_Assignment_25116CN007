#include<stdio.h>
int main(){
    int n;
    
    printf("input n:");
    scanf("%d",&n);
    for(int i=n;i>=1;i--){
        for(int j=1;j<=n-i;j++){
            printf(" ");
        }
        for(int k=1;k<=i*2-1;k++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}