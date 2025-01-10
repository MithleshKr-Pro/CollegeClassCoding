#include <stdio.h>
int main(){
    int arrInput[6]={};
    printf("Enter the Numbers : ");
    for(int i=0;i<=5;i++){
        scanf("%d",&arrInput[i]);
    }

                                                                                //WAP to multiply 2D Array
    int multiply=1;                                                 
    for(int i=0;i<=5;i++){
        multiply=multiply*arrInput[i];
    }
    printf("Multiply = %d\n",multiply);

                                                                                //WAP to Add 2D Array
    int sum=0;
    for(int i=0;i<=5;i++){
        sum=sum+arrInput[i];
    }
    printf("Sum = %d\n",sum);

                                                                                //WAP to Subtract 2D Array
    int subtract=0;
    for(int i=0;i<=5;i++){
        subtract=subtract-arrInput[i];
    }
    printf("Subtract = %d\n",subtract);


    return 0;
}