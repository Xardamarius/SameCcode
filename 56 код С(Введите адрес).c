#include <stdio.h>

int main(void)
{
    char *p;
    
    printf("Введение адрес: ");
    scanf("%p", &p);
    printf("По этому адресу хранится значение%p is %c\n", p, *p);
    

    return 0;
}