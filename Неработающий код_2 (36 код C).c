#include <stdio.h>

char *match(char c, char *s);

int main(void)
{
    char s[80], *p, ch;
    
    gets(s);
    ch = getchar();
    p = match(ch, s);
    
    if(*p)
        printf("%s", p);
    else
        printf("Символ не обнаружен.");
    
    return 0;
}