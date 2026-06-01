#include<stdio.h>
int main(){
int n;
printf("input number:");
scanf("%d",&n);
int sum=0,rem,temp=n;
while(temp>0){
    int fact=1;
    rem=temp%10;
    for(int i=1;i<=rem;i++){
        fact*=i;
    }
    sum+=fact;
    temp/=10;
}
if(sum==n) 
    printf("Strong Number");
 else printf("Not A Strong Number");
    return 0;
}