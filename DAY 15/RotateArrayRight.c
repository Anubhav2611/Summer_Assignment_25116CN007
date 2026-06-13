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
    int l=arr[n-1];
    for(int i=n-1;i>=0;i--){
        arr[i]=arr[i-1];
    }
    arr[0]=l;
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    } return 0;

}