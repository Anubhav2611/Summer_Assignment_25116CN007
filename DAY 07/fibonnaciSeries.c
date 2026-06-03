#include <stdio.h>
int fab(int n){
    if(n==1) return 0;
    if(n==2) return 1;
    return fab(n-1)+fab(n-2);
}

int main(){
    int n;
    printf("input number of  terms: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
    printf("%d ",fab(i));
    }
    return 0;
}