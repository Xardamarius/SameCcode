#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define CLASSES 3
#define GRADES 30

int grade[CLASSES][GRADES];

void enter_grades(void);
int get_grade(int num);
void disp_grades(int g[][GRADES]);

int main(void)
{
    char ch, str[80];
    for(;;){
        do{
            printf("(В)вод оценок \n");
            printf("(П)ечать оценок\n");
            printf("(К)онец\n");
            gets(str);
            ch = toupper(*str);
        }   while(ch!='B' && ch!='П' && ch!='К');
        
        switch(ch){
            case 'В':
                enter_grades();
                break;
            case 'П':
                disp_grades(grade);
                break;
            case 'К':
                exit(0);
        }
    }
    
    return 0;
}

void enter_grades(void){
    int t, i;
    
    for(t=0; t<CLASSES; t++){
        printf("Class # %d:\n", t+1);
        for(i=0; i<GRADES; ++i)
            grade[t][i] = get_grade(i);
    }
}

int get_grade(int num)
{
    char s[80];
    
    printf("Введите оценку студента # %d:\n", num+1);
    gets(s);
    return(atoi(s));
}

void disp_grades(int g[][GRADES])
{
    int t, i;
    
    for(t=0; t<CLASSES; ++t){
        printf("группа № %d:\n", t+1);
        for(i=0; i<GRADES; ++i)
            printf("Студент #%d is %d\n", i+1, g[t][i]);
    }
}