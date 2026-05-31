#include<stdio.h>
#include<math.h>
int main(){
    int start,end,n;
    printf("input the start:");
    scanf("%d",&start);
    printf("input the end:");
    scanf("%d",&end);
    for(n=start;n<=end;n++){
        int temp=n,count=0,sum=0,rem;
        while(temp>0){
            temp/=10;
            count++;
        }temp=n;
        while(temp>0){
            rem=temp%10;
            sum+=pow(rem,count);
            temp/=10;
        }if(sum==n)  
        printf("%d ",n);
    }return 0;
}