
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1; i<=10; i++){
        for(int j=1; j<=n; j++){
            printf("%d X %d = %d, ",j,i,i*j);
        }
        printf("\n");
    }
    return 0;
}