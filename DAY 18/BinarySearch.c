#include<stdio.h>
int main(){
    int n;
    printf("input the size of the array:");
    scanf("%d",&n);
    printf("input the elements  of  the array:");
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("input the  number to search:");
    int flag;
    scanf("%d",&flag);
    int l=0,h=n-1,m,found=0;
    while(l<=h){
        m=(l+h)/2;
        if(arr[m]==flag){
            printf("element found at the Index of:%d",m);
            found=1;
            break;
        }
        else if(arr[m]<flag){
            l=m+1;
        }
        else{
            h=m-1;
        }
    }if (found==0)
    {
    printf("element not  found");
    }
    return 0;
    

}