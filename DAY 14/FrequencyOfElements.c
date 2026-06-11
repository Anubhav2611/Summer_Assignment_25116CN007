#include<stdio.h>
int main(){
    int n;
    printf("input the size of  the array:");
    scanf("%d",&n);
    printf("input the elements of the Array:");
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("input the element whose frequency is to be found:");
    int key,count=0;
    scanf("%d",&key);
    for(int i=0;i<n;i++){
        if(arr[i]==key)
        count++;
    }
    printf("Frequency of the Given Element is:%d",count);
    return 0;
}