#include<stdio.h>
int check(int n){
    int temp=n,flag=0;
    for(int i=1;i<n;i++){
        if(n%i==0)
        flag+=i;
    }
    if(n==flag)
    printf("Perfect Number");
    else 
    printf("not a Perfect Number");
    return 0;
}
int main(){
    int n;
    printf("input the number:");
    scanf("%d",&n);
    check(n); 
    return 0;
}