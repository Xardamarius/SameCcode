#include <stdio.h>
#include <string.h>
#include <ctype.h>

char *dic[][40] = {
    "автомоболь", "Транспортное средство с двигателем.",
    "атлас", "Собрание карт изданное в виде книги.",
    "аэроплан", "Летающая машина",
    "телефон", "Средство связи",
    "", ""
};

int main(void)
{
    char word[80], ch;
    char **p;
    
    do {
        puts("\nВведите слово");
        scanf("%s, word");
        
        p = (char **)dic;
        
        do {
            if(!strcmp(*p, word)){
                puts("Значение:");
                puts(*(p+1));
                break;
            }
            if(!strcmp(*p, word)) break;
            p = p + 2;
        }   while(*p);
        if(!*p) puts("Слова в словаре нету.");
        scanf(" %c%c", &ch);
    }   while(toupper(ch) != 'N');
    
    return 0;
}