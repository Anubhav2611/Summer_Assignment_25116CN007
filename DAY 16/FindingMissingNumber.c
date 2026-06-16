#include<stdio.h>
int main(){
 int n;
 printf("input the  Size of  the  Array:");
 scanf("%d",&n);
 printf("input the elements of the array:");
 int arr[n];
 for(int i=0;i<n-1;i++){
 scanf("%d",&arr[i]);
}
int Esum=n*(n+1)/2,Asum=0;
for(int i=0;i<n-1;i++){
    Asum+=arr[i];
}
int missing=Esum-Asum;
printf("Missing Number=%d",missing);
    return 0;
}