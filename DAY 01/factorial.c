#include<stdio.h>
int main(){
    int n;
    long long factorial=1;
    printf("input the n:");
    scanf("%d",&n);
    for(int i=2;i<=n;i++){
        factorial*=i;
    }printf("factorial=%lld",factorial);
    return 0;
}