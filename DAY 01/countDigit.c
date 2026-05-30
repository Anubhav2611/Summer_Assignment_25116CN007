#include<stdio.h>
int main(){
    int n,count=0;
    printf("input n:");
    scanf("%d",&n);
    while(n>0){
        count++;
        n/=10;
    }
    printf("no of digit is:%d",count);
    return 0;
}