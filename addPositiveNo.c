#include <stdio.h>
#include <stdlib.h>
int main(){
    int sum=0,arrInput[10]={};
    printf("Enter numbers = ");
    for(int i=0;i<10;i++){
        scanf("%d",&arrInput[i]);
        if(arrInput[i]>0){
            sum=sum+arrInput[i];
            if(sum>999){
                printf("Sum exceeds 999 !!");
                exit(0);
            }
        }
    }
    printf("Sum of all positive numbers = %d",sum);
    return 0;
}