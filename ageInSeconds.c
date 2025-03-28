#include <stdio.h>
int main()
{
    float age_Sec, age_Year;
    printf("Enter your age in Years = ");
    scanf("%f", &age_Year);
    age_Sec = age_Year * 3.156E7;
    printf("Your Age in Seconds = %f", age_Sec);
    return 0;
}