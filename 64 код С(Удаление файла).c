#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>


int main(int argc, char *argv[])
{
    char str[80];
    if(argc!=2){
        printf("Командная строка: xerase <filename>\n");
        exit(1);
    }
    
    printf("Стереть %s? (Y/N): ", argv[1]);
    gets(str);
    
    if(toupper(*str)=='Y')
        if(remove(argv[1])) {
            printf("Невозможно удалить файл.\n");
            exit(1);
        }
    return 0;
}