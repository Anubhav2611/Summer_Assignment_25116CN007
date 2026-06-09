#include<stdio.h>
void fibo(int n){
    int a=0,b=1,sum;
    for(int i=1;i<=n;i++){
        printf("%d ",a);
        sum=a+b;
        a=b;
        b=sum;
    } return ;
}
int main(){
    int n;
    printf("input n:");
    scanf("%d",&n);
    fibo(n);
    return 0;
}