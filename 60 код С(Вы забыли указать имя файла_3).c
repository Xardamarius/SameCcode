#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    FILE *in, *out;
    char ch;
    
    if(argc!=3){
        printf("Вы забыли ввести имя файла.\n");
    exit(1);
    }
    
    if((in=fopen(argv[1], "rb"))==NULL){
        printf("Невозможно открыть исходный файл.\n");
        exit(1);
    }
        if((out=fopen(argv[2], "wb"))==NULL){
        printf("Невозможно открыть результирующий файл.\n");
        exit(1);
    }
    
    while(!feof(in)){
        ch = getc(in);
        if(!feof(in)) putc(ch, out);
    }
    
    fclose(in);
    fclose(out);
    
    return 0;
}