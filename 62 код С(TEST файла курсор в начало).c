#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    char str[80];
    FILE *fp;
    
    if((fp = fopen("TEST", "w+"))==NULL){
        printf("Невозможно открыть файла.\n");
        exit(1);
    }
    
    do {
        printf("Введите строку (для выхода нажмите клавишу <ENTER>):\n");
        gets(str);
        strcat(str, "\n");
        fputs(str, fp);
    }   while(*str!='\n');
    
    rewind(fp);
    while(!feof(fp)){
        fgets(str, 79, fp);
        printf(str);
    }
    
    return 0;
}