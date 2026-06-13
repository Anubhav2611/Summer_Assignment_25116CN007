#include<stdio.h>
int main(){
    int n;
    printf("input the size of array:");
    scanf("%d",&n);
    printf("input  the elements of the array:");
    int arr[n],temp;
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n/2;i++){
        temp=arr[i];
        arr[i]=arr[n-1-i];
        arr[n-1-i]=temp;


    }
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}
