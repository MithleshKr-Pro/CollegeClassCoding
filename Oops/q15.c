#include<stdio.h>
int main(){
    int n,factorial=1;
    scanf("%d",&n);
    while(n>1){
        factorial*=n;
        n--;
    }
    printf("%d",factorial);
    return 0;
}