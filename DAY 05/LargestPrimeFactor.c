#include<stdio.h>
int main(){
    int n,larg=0;
    printf("input number:");
    scanf("%d",&n);
    for(int i=2;i<=n;i++){
        if(n%i==0){
            int flag=1;
            for(int  j=2;j<i;j++){
                if(i%j==0){
                flag=0;
                break;}
            }if (flag==1)
            larg=i;
        }
    }printf("largest prime factor is:%d",larg);
    return 0; 
}