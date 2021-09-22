#include <stdio.h>
#include <conio.h>
#include <ctype.h>

int main(void)
{
    char ch;
    
    printf("Ввведите текст (для выхода введите точку).\n");
    do {
        ch = getch();
        
        if(islower(ch)) ch = toupper(ch);
        else ch = tolower(ch);
        
        putchar(ch);
    }   while(ch != '.');
    
    return 0;
}