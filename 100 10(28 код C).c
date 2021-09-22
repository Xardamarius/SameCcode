#include <stdio.h>

int sqr(int x);

int main(void)
{
    int t=10;
    
    printf("%d %d", sqr(t), t);
    
    return 0;
}

int sqr(int x)
{
    x = x*x;
    return(x);
}