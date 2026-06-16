#include<stdio.h>
int main(){
    int n;
    printf("input  the size of  the Array:");
    scanf("%d",&n);
    printf("input the elements of the  Array:");
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Array After Removing Duplicate :");
    for(int i=0;i<n;i++){
        int dup=0;
        for(int j=0;j<i;j++){
            if(arr[i]==arr[j]){
                dup=1;
                break;
            }
        }
        if(!dup){
            printf("%d ",arr[i]);
        }
    }
    return 0;
}
