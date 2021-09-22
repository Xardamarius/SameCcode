#include <stdio.h>

int main(void)
{
    char str[80];
    printf("Введите строку: ");
    gets(str);
    printf(str);
    
    return 0;
}