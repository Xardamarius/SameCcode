#include <stdio.h>


int main(void)
{
    double x = 100.1,y;
    int *p;
    
    p = &x;
    y = *p;
    
    printf("%f", y);
    return 0;
}