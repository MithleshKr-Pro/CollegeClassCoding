#include <stdio.h>
#include <math.h>
int main(){
    float p,t,r=5,i,mat_Amount;
    printf("Principal Amount = ");
    scanf("%f",&p);
    printf("Time = ");
    scanf("%f",&t);
    i=(p*r*t)/100;
    mat_Amount=i+p;
    printf("Maturity Amount = %f",mat_Amount);
    return 0;
}