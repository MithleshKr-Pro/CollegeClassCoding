#include <stdio.h>
#include <math.h>
int main(){
    float a,b,c,s,Area;
    printf("Enter First Side = ");
    scanf("%f",&a);
    printf("Enter Second Side = ");
    scanf("%f",&b);
    printf("Enter Third Side = ");
    scanf("%f",&c);
    s=(a+b+c)/2;
    Area=sqrt((s)*(s-a)*(s-b)*(s-c));
    printf("Required Area of Triangle = %f",Area);
    return 0;
}