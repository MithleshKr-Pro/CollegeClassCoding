#include <stdio.h>
#include<math.h>
int main(){
    int a,b,c;
    printf("Enter a = ");
    scanf("%d",&a);
    printf("Enter b = ");
    scanf("%d",&b);
    printf("Enter c = ");
    scanf("%d",&c);
    if (a>b && a>c){
        printf( "%d is Greatest of [%d,%d,%d].",a,a,b,c);
    }
    else if (b>c && b>a){
        printf( "%d is Greatest of [%d,%d,%d].",b,a,b,c);
    }
    else if (c>b && c>a){
        printf( "%d is Greatest of [%d,%d,%d].",c,a,b,c);
    }
    return 0;
    }