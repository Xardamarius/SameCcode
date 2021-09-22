#include <stdio.h>

union pw {
    short int i;
    char ch[2];
};

int putw(short int num, FILE *fp);

int main(void)
{
    FILE *fp;
    
    fp = fopen("test.tmp", "wb+");
    
    putw(1000, fp);
    fclose(fp);
    
    return 0;
}

int putw(short int num, FILE *fp)
{
    union pw word;
    
    word.i = num;
    
    putc(word.ch[0], fp);
    return(word.ch[1], fp);
}