#include<stdio.h>
int main(){
    int n ;
    printf("input the number:");
    scanf("%d",&n);
    int sum=0;
    for(int i=1;i<=n/2;i++){
        if(n%i==0){
            sum+=i;
        }
    }if(sum==n&& n>0)
    printf("Perfect Number");
    else printf("NOt a Perfect number");
    return 0;
}
