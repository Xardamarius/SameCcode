#include <stdio.h>
#include <ctype.h>

void pr_reverse(char *s);

int main(void)
{
    pr_reverse("Я люблю C++");
    
    return 0;
}

void pr_reverse(char *s)
{
    register int t;
    
    for(t=strlen(s)-1; t>=0; t--) putchar(s[t]);
}