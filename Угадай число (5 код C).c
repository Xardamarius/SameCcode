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
        printf(" %d - волшебное число ", magic);
        
    } 
    else 
        guess > magic ? printf("Много") : printf("мало");
    
    return 0;
}