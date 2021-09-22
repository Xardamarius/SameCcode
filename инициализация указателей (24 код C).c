#include <stdio.h>
#include <string.h>

char *p = "Здравствуйте";

int main(void)
{
    register int t;
    
    printf(p);
    for(t=strlen(p)-1; t>-1; t--) printf("%c", p[t]);
    
    return 0;
}