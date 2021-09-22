#include <stdio.h>
#include <string.h>

void converge(char *targ, char *src);

int main(void)
{
    char target[80] = "XXXXXXXXXXXXXXXXXXXXXXXXXXXX"
                        "Проверка функции converge().";
    converge(target, "Проверка функции converge().");
    
    printf("Результат: %s\n", target);
    
    return 0;
}

void converge(char *targ, char *src)
{
    int i, j;
    
    printf("%s\n", targ);
    for(i=0, j=strlen(src); i<=j; i++, j--){
        targ[i] = src[i];
        targ[j] = src[j];
        printf("%s\n", targ);
    }
}