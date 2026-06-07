#include<stdio.h>
int sum(int a,int b){
    return a+b;
}
int main(){
    int a,b;
    printf("input a&b:");
    scanf("%d %d",&a,&b);
    printf("sum of the number:%d",sum(a,b));
    return 0;
}
