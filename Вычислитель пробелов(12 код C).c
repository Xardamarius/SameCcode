#include <stdio.h>

int main(void)
{
    char s[80], *str;
    int space;
    
    printf("Введите строку");
    gets(s);
    str = s;
    
    for(space=0; *str; str++){
        if(*str != ' ') continue;
        space++;
    }
    printf("%d пробелов\n", space);
    
    return 0;
}