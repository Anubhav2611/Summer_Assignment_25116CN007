#include<stdio.h>
int main(){
    int n,flag,temp=0,p;
    printf("input the number for search:");
    
    scanf("%d",&flag);
    printf("input the size of the  array:");
    scanf("%d",&n);
    printf("input the  Elements if the Array:");
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        if(arr[i]==flag){
        temp=1,p=i;
        break;
    }
        
    }if(temp==1)
    printf("found at the position of:%d",p+1);
    else 
    printf("not found");
    return 0;
}
