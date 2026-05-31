#include<stdio.h>
int main(){
    int n;
    printf("input the term:");
    scanf("%d",&n);
    int a=0,b=1,sum;
    for(int i=1;i<n;i++){
        sum=a+b;
        a=b;
        b=sum;
    }printf("nth term is:%d",a);
    return 0;
}