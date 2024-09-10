#include <stdio.h>
 int main()
{
    int x=5,y=7,z;
    z=x;
    x=y;
    y=z;
    printf("After Swapping Using 3rd Variable = %d %d",x,y);

return 0;
}