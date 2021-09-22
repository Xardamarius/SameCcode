#include <stdio.h>

#define TED 10

int main(void)
{
#ifdef TED
    printf("Привет, Еуд\n");
#else
    printf("Всем привет\n");
#endif
#ifndef RALPH
    printf("Ральфа нет дома\n");
#endif   

    return 0;
}