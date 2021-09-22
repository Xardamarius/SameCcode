#include <stdio.h>

int main(void)
{
    int i;
    
    for(i=1; i<20; i++)
        printf("%8d %8 %8d\n", i, i*1, i*i*1);

    return 0;
}