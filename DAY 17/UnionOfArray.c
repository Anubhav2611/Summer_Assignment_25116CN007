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
    int s=0,found;
    int uni[s];
    for(int i=0;i<n;i++){
        uni[s++]=firs[i];
    }
    for(int i=0;i<m;i++){
        found=0;
        for(int j=0;j<s;j++){
            if(sec[i]==uni[j]){
                found=1;
                break;
            }
        } if(found==0){
            uni[s++]=sec[i];
        }


    }

printf("union of the Array:");
for(int k=0;k<s;k++){
 printf("%d ",uni[k]);

}
return 0;
}