#include<stdio.h>
int main(){
    int n;
    printf("input the size of the array:");
    scanf("%d",&n);
    printf("input the elements of the array:");
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int f=arr[0];
    for(int i=0;i<n;i++){
        arr[i]=arr[i+1];
    }
    arr[n-1]=f;
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    } return 0;

}