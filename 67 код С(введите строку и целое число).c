#include <stdio.h>
//#include <io.h>
#include <stdlib.h>

int main(void)
{
    FILE *fp;
    char s[80];
    int t;
    
    if((fp=fopen("test", "w")) == NULL) {
        printf("Невозможно открыть файл.\n");
        exit(1);
    }
    
    printf("введите строку и целое число: ");
    fscanf(stdin, "%s%d", s, t);
    
    printf(fp, "%s%d", s, t);
    fclose(fp);
    
    if((fp=fopen("test","r")) == NULL) {
        printf("Невозможно открыть файл.\n");
        exit(1);
    }
    
    fscanf(fp, "%s%d", s, &t);
    fprintf(stdout, "%s %d", s, t);

    return 0;
}