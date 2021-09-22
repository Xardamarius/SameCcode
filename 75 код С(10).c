#include <stdio.h>

#define concat(a, b) a ## b

int main(void)
{
    int xy = 10;
    
    printf("%d", concat(x, y));

    return 0;
}