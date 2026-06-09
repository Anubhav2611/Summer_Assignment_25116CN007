#include<stdio.h>
void check(int n){
    int rem,temp=n,rev=0;
    while(temp>0){
        rem=(temp%10);
        rev=rev*10+rem;
        temp/=10;
    }if(n==rev)
    printf("Palindrome");
    else printf("not a Palindrome");
    return;
}

int main(){
    int n;
    printf("input number:");
    scanf("%d",&n);
    check(n);
    return 0;
}
