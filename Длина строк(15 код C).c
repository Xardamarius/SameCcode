#include <stdio.h>
#include <string.h>

int main(void)
{
    char s1[80], s2[80];
    
    gets(s1);
    gets(s2);
    
    printf("Длина строк: %d %d\n", strlen(s1), strlen(s2));
    
    if(!strcmp(s1, s2)) printf("Строки одинаков\n");
    
    strcat(s1, s2);
    printf("%s\n", s1);
    
    strcpy(s1, "Проверка.\n");
    printf(s1);
    if(strchr("Привет", 'е'))
        printf("В слове \"Привет\" есть буква \"е\"\n");
    if(strstr("Привет", "ив"))
        printf("В слове \"Привет\" есть сочетание букв \"ив\"");
    
    return 0;
}