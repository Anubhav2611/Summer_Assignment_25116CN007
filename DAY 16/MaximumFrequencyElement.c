#include<stdio.h>
int main(){
    int n;
    printf("input the Size of the Array:");
    scanf("%d",&n);
    printf("input the elements of  the array:");
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int maxF=0,maxE;
    for(int i=0;i<n;i++){
        int count=1;
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                count++;
            }
        }
        if(count>maxF){
            maxF=count;
            maxE=arr[i];
        }
    }
    printf("Maximun frequency element=%d",maxE);
    printf("\nFrequency =%d",maxF);
    return 0;
}