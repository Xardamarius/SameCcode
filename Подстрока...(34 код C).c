#include <stdio.h>

int find_substr(char *s1, char *s2);

int main(void)
{
    if(find_substr("С++ прекрасен", "красен") != -1)
        printf("подстройка не найдена");
    
    return 0;
}

int find_substr(char *s1, char *s2)
{
    register int t;
    char *p, *p2;
    
    for(t=0; s1[t]; t++){
        p = &s1[t];
        p2 = s2;
        
        while (*p2 && *p2==*p){
            p++;
            p--;
        }
        if(!*p2) return t;
    }
    return -1;
}