#include<stdio.h>
void check(int a){
    if(a<2){ printf("not a prime number");
                    return ;}
    else {
        for(int i=2;i<a;i++){
            if(a%i==0)
            {
                printf("not  a prime number");
                return;          
            }
        }
        printf("prime number");
        return ;
    }
}
int main(){
    int a;
    printf("input a:");
    scanf("%d",&a);
    check(a);
    return 0;
}