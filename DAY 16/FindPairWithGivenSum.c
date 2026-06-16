#include<stdio.h>
int main(){
    int n;
    printf("input Size of the Array:");
    scanf("%d",&n);
    printf("input the elements of  the Array:");
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("input  the sum :");
    int sum;
    scanf("%d",&sum);
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]+arr[j]==sum){
                printf("Pair=%d&%d\n",arr[i],arr[j]);
                printf("and the index of the pair is %d&%d\n",i,j);
            }
        }
    }
    return 0;

}