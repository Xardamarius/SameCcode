#include <stdio.h>
//#include <string.h>
#include <stdlib.h>
//#include <ctype.h>

#define SIZE 100
//#define LEN 80

void push(int i);
int pop(void);

int *tos, *p1, stack[SIZE];

int main(void)
{
    int value;
    tos = stack;
    p1 = stack;
    
    do{
        printf("Введите число: ");
        scanf("%d", &value);
        if(value!=0) push(value);
        else printf("Число на вершине стека равно %d\n", pop());
    } while(value!=-1);
    
    return 0;
}

void push(int i)
{
    p1++;
    if(p1==(tos+SIZE)){
        printf("Стек переполнен.\n");
    }
    *p1 = i;
}

int pop(void)
{
    if(p1==tos){
        printf("Стек исчерпан.\n");
        exit(1);
    }
    p1--;
    return *(p1+1);
}