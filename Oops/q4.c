#include<stdio.h>
int main(){
    int i=1,sum=0;
    while(i<=10){
        int n;
        scanf("%d",&n);
        sum+=n;
        i++;
    }
    printf("%d",sum);
    return 0;
}