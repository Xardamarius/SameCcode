#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    FILE *fp;
    char ch;
    
    if(argc!=2){
        printf("Вы забыли указать имя файла.\n");
        exit(1);
    }
    
    if((fp=fopen(argv[1], "w"))==NULL){
        printf("Невозможно открыть файл.\n");
        exit(1);
    }
    
    ch = getc(fp);
    while(ch!=EOF)
        putchar(ch);
        ch = getc(fp);
    
    fclose(fp);
    return 0;
}