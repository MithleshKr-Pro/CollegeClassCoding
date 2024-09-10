#include <stdio.h>
int main()
{
    int x=2,y=5;
    x=x+y;
    y=x-y;
    x=x-y;
    printf("Ater Swapping Without 3rd Variable = %d %d",x,y);
    return 0;
    
}