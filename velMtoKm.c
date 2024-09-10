#include <stdio.h>
int main(){
    float vel_Km,vel_M;
    printf("Enter Velocity (M/Sec) = ");
    scanf(" %f",&vel_M);
    vel_Km=vel_M*18/5;
    printf("Velocity (Km/h) = %f Km/h",vel_Km);
    return 0;
}