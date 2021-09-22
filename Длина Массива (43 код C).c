#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[80];
    
    gets(str);
    printf("Длина массива равна %d", strlen(str));
    
    return 0;
}