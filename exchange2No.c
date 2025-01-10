#include <Stdio.h>
int exchangeFunc(int ,int);
int main(){
    int x,y,result;
    scanf("%d%d",&x,&y);
    result=exchangeFunc(x,y);
    printf("%d %d ",result,x);
    return 0;
}
int exchangeFunc(int x,int y){
    // int arr[2];
    x=x+y;
    y=x-y;
    x=x-y;
    // arr[2]={x,y};
    return x;
}