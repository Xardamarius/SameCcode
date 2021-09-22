#include <stdio.h>

int main(void)
{
    printf("Выравнивание по правому краю:%8d\n", 100);
    printf("Выравнивание по левому краю:%-8d\n", 100);

    return 0;
}