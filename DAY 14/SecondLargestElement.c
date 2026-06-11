#include<stdio.h>
#include<limits.h>
int main(){
    int n;
    printf("input the  size of the array:");
    scanf("%d",&n);
    printf("input the elements of the array:");
    int arr[n],max=INT_MIN;
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        if(arr[i]>max)
        max=arr[i];
    }int smax=INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>smax&&arr[i]<max)
        smax=arr[i];
    } 
    printf("Second Largest Element is:%d",smax);
    return 0;
}