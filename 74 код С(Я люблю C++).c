#include <stdio.h>

#define mkstr(s) # s

int main(void)
{
    printf(mkstr("Я люблю C++"));

    return 0;
}