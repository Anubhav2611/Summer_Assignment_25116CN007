#include<stdio.h>
int sum(int n){
    if(n==0) 
    return 0;
    else 
    return (n%10)+sum(n/10);
}
int main(){
    int n;
    printf("input Number:");
    scanf("%d",&n);
    printf("sum of the digit=%d",sum(n));
    return 0;
}