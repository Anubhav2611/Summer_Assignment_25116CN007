#include<stdio.h>
int main(){
    int n;
    printf("input the size of the array:");
    scanf("%d",&n);
    printf("input the elements  of  the array:");
    int arr[n],temp;
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    printf("after Bubble Sorting:");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}