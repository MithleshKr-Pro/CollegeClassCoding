#include <stdio.h>
int main(){
    float vel_Km,vel_M;
    printf("Enter Velocity (Km/h) = ");
    scanf("%f ",&vel_Km);
    vel_M=vel_Km*5/18;
    printf("Velocity (m/sec) = %f m/sec",vel_M);
    return 0;

}