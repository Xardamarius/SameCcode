#include <stdio.h>
#include <string.h>


int main(void)
{
    char *p1;
    char s[80];
    
    do {
        p1 = s;
        gets(s);
        
        while(*p1)printf(" %d", *p1++);
        
    } while(strcmp(s, "done"));
    
    return 0;
}