#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

//#define SIZE 100
//#define LEN 80

void check(char *a, char *b,
                    int(*cmp)(const char*, const char *));

int numcmp(const char *a, const char *b);

int main(void)
{
    char s1[80], s2[80];
    
    gets(s1);
    gets(s2);
    
    if(isalpha(*s1))
                check(s1, s2, strcmp);
    else
                check(s1, s2, strcmp);
    
    return 0;
}

void check(char *a, char *b, 
                    int (*cmp)(const char *, const char *))
                    
{
    printf("Проверка равенства.\n");
    if(!(*cmp)(a, b)) printf("Равны");
    else printf("Не равны");
}

int numcmp(const char *a, const char *b)
{
    if(atoi(a)==atoi(b)) return 0;
    else return 1;
}