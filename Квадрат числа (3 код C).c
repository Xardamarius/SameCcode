#include <stdio.h>

int main(void)
{
    int isqrd, i;
    
    printf("Введите число: ");
    scanf("%d", &i);
    
    isqrd = i>0 ? i*i : -(i*i);
    
    printf("%d в квадрате равно %d", i, isqrd);
    
    return 0;
}