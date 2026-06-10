#include<stdio.h>
int main(){
    int n,sum=0,avg;
    printf("input the size of Array:");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        sum+=arr[i];
    } avg=sum/n;
    printf("sum of the Array=%d",sum);
    printf("\nAverage of the Array=%d",avg);
    return 0;
}