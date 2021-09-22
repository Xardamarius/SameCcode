#include <stdio.h>

int f1(int n);
int f2(void);

int main(void)
{
    int t;
    
    printf("Введите число: ");
    scanf("%d", &t);
    
    t ? f1(t) + f2() : printf("Введён нуль.\n");
    
    return 0;
    
}

int f1(int n)
{
    printf("%d", n);
    return 0;
}

int f2(void)
{
    printf("Введено.\n");
    return 0;
}