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
 int size=0;
 int inter[n],flag;
 for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        if(firs[i]==sec[j]){
            
            inter[size++]=firs[i];
            break;
        }
    }
}printf("intersection is:");
    for(int i=0;i<size;i++){
    printf("%d ",inter[i]);
 }
 return 0;
}