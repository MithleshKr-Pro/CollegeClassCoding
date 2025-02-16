#include<stdio.h>
int main(){
    int n,spaceCount;
    scanf("%d",&n);
    spaceCount=n-1;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=spaceCount; j++){
            printf(" ");
        }
        for(int j=1; j<=i; j++){                                    
            printf("* ");
        }
        spaceCount--;
        printf("\n");
    }
    return 0;
}