#include<stdio.h>
int main(){
    int n;
    printf("input number:");
    scanf("%d",&n);
    for(int i=2;i<n;i++){
        if(n%i==0)
        {printf("\nNot a prime number");
            return 0;}
    }printf("\nPrime number");
    return 0;
}
