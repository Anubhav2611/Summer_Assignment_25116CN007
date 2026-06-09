#include<stdio.h>
#include<math.h>
void check(int n){
    int temp=n,count=0,rem,new=0;
    while(temp>0){
        temp/=10;
        count++;
    }
    temp=n;
    while(temp>0){
        rem=temp%10;
        new+=pow(rem,count);
        temp/=10;
    }
    if(new==n)
    printf("Armstong number");
    else 
    printf("not a Armstrong Number");
}
int main(){
    int  n ;
    printf("input the number:");
    scanf("%d",&n);
    check(n);

    return 0;
}