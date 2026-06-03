#include<stdio.h>
int rev(int n,int temp){
    if(n==0) return temp;
    else 
    return rev(n/10,temp*10+n%10);
}
int main(){
    int n;
    printf("input numberL:");
    scanf("%d",&n);
    printf("reverse of the number is:%d",rev(n,0));
    return 0;
}