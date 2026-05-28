#include<stdio.h>
int main(){
    int n,rem,sum=0;
    printf("input n:");
    scanf("%d",&n);
    while(n>0){
    rem=n%10;
    sum+=rem;
    n=n/10;
    }printf("The sum of the digit is:%d",sum);
    return 0;
}