#include<stdio.h>
int main(){
    int start,end,i,j,flag;
    printf("input the start of range:");
    scanf("%d",&start);
    printf("input the end of the range:");
    scanf("%d",&end);
    printf("prime number between the range  is:");
    for(i=start;i<=end;i++){
        if(i<2)
        break;
        flag=1;
        for(j=2;j*j<=i;j++){
            if(i%j==0){
                flag=0;
                break;
            }
        }if(flag==1)
        printf("%d ",i);
    }return 0;
}