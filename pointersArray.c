#include<stdio.h>
int main(){
   int n;
   scanf("%d",&n);
   int arr1[n];
   int *a1=arr1;
   int j=n-1;
   for(int i=0;i<(arr1)[n];i++){
    scanf("%d",&a1[i]);
   }
   for(int i=0;i<(arr1)[n];i++){
    // arr1[j]=arr1[i];
    printf("%d ",arr1[j]);
    j-=1;
   }
    return 0;
}