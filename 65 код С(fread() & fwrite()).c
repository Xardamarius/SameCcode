#include <stdio.h>
#include <stdlib.h>


int main(void)
{
    FILE *fp;
    double d = 12.23;
    int i = 101;
    long l =123023L;
    
    if((fp=fopen("test", "wb+"))==NULL) {
        printf("Невозможно открыть файл.\n");
        exit(1);
    }
    
    fwrite(&d, sizeof(double), 1, fp);
    fwrite(&d, sizeof(int), 1, fp);
    fwrite(&d, sizeof(long), 1, fp);
    
    rewind(fp);
    fread(&d, sizeof(double), 1, fp);
    fread(&i, sizeof(int), 1, fp);
    fread(&l, sizeof(long), 1, fp);
    
    printf("%f %d %ld", d, i, l);
    fclose(fp);
    return 0;
}