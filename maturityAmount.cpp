#include <stdio.h>
#include <math.h>
#include <iostream>
#include <conio.h>

int main(){
    float p,t,r=5,i,mat_Amount;
    printf("Principal Amount = ");
    scanf("%f",&p);
    printf("Time = ");
    scanf("%f",&t);
    i=(p*r*t)/100;
    mat_Amount=i+p;
    printf("\a\nMaturity Amount = %f",mat_Amount);
    return 0;
}