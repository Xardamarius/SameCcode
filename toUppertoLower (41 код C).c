#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char ch;
    
    printf("Ввведите текст (для выхода введите точку).\n");
    do {
        ch = getchar();
        
        if(islower(ch)) ch = toupper(ch);
        else ch = tolower(ch);
        
        putchar(ch);
    }   while(ch != '.');
    
    return 0;
}