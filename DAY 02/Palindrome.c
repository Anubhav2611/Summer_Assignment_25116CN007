#include<stdio.h>
int main(){
    int n,rev=0,rem;
    printf("input n:");
    scanf("%d",&n);
    int  t=n;
    while(t>0){
        rem=t%10;
        rev=rev*10+rem;
        t/=10;
    }if(n==rev)
    printf("\nGiven number is Palindrome");
    else printf("\nGiven number is not a Palindrome");
    return 0;
}