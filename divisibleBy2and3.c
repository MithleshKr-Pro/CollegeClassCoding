#include <stdio.h>
void main(){
    int j=0,sum=0;
    printf("Numbers not divisible \n");
    for (int i=1;i<=100;i++){
        if (i%2==0 && i%3==0){
            printf("");
        }else{
            printf("  %d  ",i);
            j++;
            sum=sum+i;
        }
    }
    printf("\n %d \n",j);
    printf("Sum = %d",sum);
}