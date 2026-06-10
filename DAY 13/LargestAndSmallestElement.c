#include<stdio.h>
#include<limits.h>
int main(){
    int n;
    printf("Input the Size of the Array:");
    scanf("%d",&n);
    int arr[n];
    int  s=INT_MAX,l=INT_MIN;
    printf("input the elements of the Array:");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        if(s>arr[i]){
            s=arr[i];
        }
        if(arr[i]>l){
            l=arr[i];
        }
    }printf("smallest Element of the array is:%d",s);
    printf("\nlargest element of the array is:%d",l);
    return 0;
}