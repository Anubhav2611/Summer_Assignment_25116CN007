#include<stdio.h>
int fact(int n){
    if(n==1||n==0)
     return 1;
    else
     return n*fact(n-1);
}
int main(){
    int n;
    printf("input n:");
    scanf("%d",&n);
    int factorial=fact(n);
    printf("factorial=%d",factorial);
    return 0;
    
}
