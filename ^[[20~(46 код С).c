#include <stdio.h>

int main(void)
{
    unsigned num;
    
    for(num=0; num<255; num++){
        printf("%0 ", num);
        printf("%x ", num);
        printf("%X\n ", num);
    }

    return 0;
}