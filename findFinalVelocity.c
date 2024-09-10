#include <stdio.h>
#include <math.h>
int main(){
    float u,v,a,t;
    printf("Enter initial Velocity = ");
    scanf("%f",&u);
    printf("Acceleration = ");
    scanf("%f",&a);
    printf("Time taken = ");
    scanf("%f",&t);
    v=u+a*t;
    printf("Final Velocity = %f",v);
    return 0;
}