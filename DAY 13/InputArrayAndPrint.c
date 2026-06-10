#include<stdio.h>
int main(){
    int n;
    printf("input size of array:");
    scanf("%d",&n);
    int arr[n];
    printf("Input Elements of the Array:");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}
