#include <stdio.h>

int main(void)
{
    int a, b;
    
    printf("Введите два числа: ");
    scanf("%d%d", &a, &b);
    
    if(b) printf("%d\n", a/b);
    else printf("Делить на нуль нельзя. \n");
    
    return 0;
}