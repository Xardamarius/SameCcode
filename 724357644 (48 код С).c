#include <stdio.h>

int main(void)
{
    int count;
    
    printf("Это%n проверка\n", &count);
    printf("%d", &count);

    return 0;
}