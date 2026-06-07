#include<stdio.h>
int fact(int n){
    int temp=1;
    for(int i=2;i<=n;i++){
        temp*=i;
    } return temp;
}
int main(){
    int n;
    printf("Input n:");
    scanf("%d",&n);
    printf("factorial is:%d",fact(n));
    return 0;
}