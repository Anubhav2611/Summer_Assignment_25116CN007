#include<stdio.h>
int main(){
    int n,product=1,rem;
    printf("input n:");
    scanf("%d",&n);
    while(n>0){
        rem=n%10;
        product=product*rem;
        n/=10;
    }printf("product of digit is:%d",product);
    return 0;
}