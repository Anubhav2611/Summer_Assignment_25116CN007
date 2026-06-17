#include<stdio.h>
int main(){
    int n,m;
    printf("input the size of  the first Array:");
    scanf("%d",&n);
    printf("input the elements of the first array:");
    int firs[n];
    for(int i=0;i<n;i++){
        scanf("%d",&firs[i]);
    }
    printf("input the size of the Second Array:");
    scanf("%d",&m);
    printf("input the elements of the second array:");
    int sec[m];
    for(int i=0;i<m;i++){
        scanf("%d",&sec[i]);
    }
    int merge[n+m];
    for(int i=0;i<n;i++){
        merge[i]=firs[i];
    }
    for(int j=0;j<m;j++){
        merge[n+j]=sec[j];
    }
    printf("After Merge:");
    for(int k=0;k<n+m;k++){
        printf("%d ",merge[k]);
    }
    return 0;


    
}