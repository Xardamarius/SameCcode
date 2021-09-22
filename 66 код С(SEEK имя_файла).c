#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    FILE *fp;
    if(argc!=3) {
        printf("Командная строка: SEEK имя_файла количество_байтов\n");
        exit(1);
    }
    
    if((fp = fopen(argv[1], "rb"))==NULL){
        printf("Невозможно открыть файл.\n");
        exit(1);
    }
    
    if(fseek(fp, atol(argv[2]), SEEK_SET)){
        printf("Ошибка.\n");
        exit(1);
    }
    
    printf("В позиции %ld записан символ %C.\n", atol(argv[2]), getc(fp));
    fclose(fp);

    return 0;
}
