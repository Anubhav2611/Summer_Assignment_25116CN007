#include<stdio.h>
#include<math.h>
int main(){
    int n ;
    printf("input number:");
    scanf("%d",&n);
    int count=0,temp1=n,sum=0,rem;
    while(temp1>0){
        temp1/=10;
        count
        ++;
    }
    int temp2=n;
    while(temp2>0){
        rem=temp2%10;
        sum+=pow(rem,count);
        temp2/=10;
    }printf("%d",sum);
    if(sum==n)
        printf("Armstrong Number");
    else printf("not a Armstronng Number");
    return 0;
}