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
    
    do {
        ch = getchar();
        putc(ch, fp);
    }   while(ch != '$');
    
    fclose(fp);

    return 0;
}