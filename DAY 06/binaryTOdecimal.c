#include<stdio.h>
#include<math.h>
int main(){
    int n,decimal=0,temp=0,rem;
    printf("input n:");
    scanf("%d",&n);
    while(n>0){
        rem=n%10;
        decimal+=rem*pow(2,temp);
        temp++;
        n/=10;
    }
    printf("decimal is:%d",decimal);
    return 0;
    
}
