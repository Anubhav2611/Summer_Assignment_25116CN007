#include<stdio.h>
int main(){
    int n;
    printf("Input Number of element:");
    scanf("%d",&n);
    int arr[n],cEven=0,cOdd=0;
    printf("inpute the elements of the Array:");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        if(arr[i]%2==0){
            cEven++;
        }
        else{
            cOdd++;
        }
    }
        printf("number of odd elements is:%d",cOdd);
        printf("\nnumber of even elements is:%d",cEven);
    
    return 0;
}