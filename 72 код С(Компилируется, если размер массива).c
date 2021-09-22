#include <stdio.h>

#define MAX 100

int main(void)
{
#if MAX>99
    printf("Компилируется, если размер массива больше 99.\n");
#endif

    return 0;
}