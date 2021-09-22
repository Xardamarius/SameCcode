#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char str[80];
    int i;
    
    printf("Введите строку: ");
    fgets(str, 10, stdin);
    
    i = strlen(str)-1;
    if(str[i]=='\n') str[i] = '\0';
    
    printf("Результат: %s", str);
    return 0;
}