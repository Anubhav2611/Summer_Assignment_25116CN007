#include<stdio.h>
int main(){
    int x,n,power=1;
    printf("input x&n:");
    scanf("%d %d",&x,&n);
    if(n==0){
        printf("1");
    }
    for(int i=1;i<=n;i++){
        power*=x;
    }printf("x to the power n=%d",power);
    return 0;
}