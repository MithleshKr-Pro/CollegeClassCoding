#include<stdio.h>
void addPointerFunc(int m,int n,int x[m][n],int y[m][n]);
int main(){
    int result,m,n;
    scanf("%d%d",&m,&n);
    int x[m][n],y[m][n];
    int (*a)[n]=x,(*b)[n]=y;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&a[i][j]);
            
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&b[i][j]);
        }
    }
    addPointerFunc(m,n,a,b);
    return 0;
}
void addPointerFunc(int m,int n,int x[m][n],int y[m][n]){
    int add=0;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            add=add+x[i][j]+y[i][j];
        }
    }
    printf("Sum = %d",add);
}