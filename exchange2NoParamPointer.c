#include<stdio.h>
void exchangeParamFunc(int m,int n,int (*az)[n]);
int main(){
    int m,n;
    scanf("%d%d",&m,&n);
    int x[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&x[i][j]);
        }
    }
    int (*a)[n]=x;
    exchangeParamFunc(m,n,a);
    return 0;
}
void exchangeParamFunc(int m,int n,int (*az)[n]){
    int x=m-1,y=n-1;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("%d ",az[x][y]);
            y-=1;
        }
        y=n-1;
        x-=1;
    }
}