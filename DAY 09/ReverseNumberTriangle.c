#include<stdio.h>
int main(){
    int n;
    printf("input n:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        int m=1;
        for(int j=1;j<=n+1-i;j++){
            printf("%d",m);
            m++;
        } printf("\n");
    }return 0;
}