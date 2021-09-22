#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int magic;
    int guess;
    
    magic = rand();
    
    printf("Угадайте волшебное число");
    scanf("%d", &guess);
    
    if (guess == magic){
        printf("** Верно **");
        printf(" %d - волшебное число\n");
        
    } 
    else if(guess > magic) 
        printf("Неверно, слишком мало"); 
    else printf("Неверно, слишком много\n");
    
    return 0;
}