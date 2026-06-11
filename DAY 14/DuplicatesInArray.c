#include<stdio.h>
int main(){
    int n;
    printf("input the size of the array:");
    scanf("%d",&n);
    printf("input the elements  of the array:");
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                printf("%d ",arr[i]);
                break;
            }
        }
    }
    return 0;
}