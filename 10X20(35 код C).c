#include <stdio.h>

int mul(int a, int b);

int main(void)
{
    int x, y, z;
    
    x =10; y = 20;
    z = mul(x, y);
    printf("%d", mul(x,y));
    mul(x, y);
    
    return 0;
}

int mul(int a, int b)
{
    return a*b;
}