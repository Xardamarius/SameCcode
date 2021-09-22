#include <stdio.h>
#include <string.h>

int main(void)
{
    int t;
    
    for(t=0; t<100; t++){
        printf("%d", t);
        if(t==10) break;
    }
    
    return 0;
}