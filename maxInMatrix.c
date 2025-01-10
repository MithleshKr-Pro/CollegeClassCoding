#include<stdio.h>
void maxElem(int m,int n,int x[m][n]);
int main(){
    int m,n;
    scanf("%d%d",&m,&n);
    int x[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&x[i][j]);
        }
    }
    maxElem(m,n,x);
    return 0;
}
void maxElem(int m,int n,int x[m][n]){
    int max=0;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(max<x[i][j]){
                max=x[i][j];
            }
        }
    }
    printf("MAX Element = %d",max);
}