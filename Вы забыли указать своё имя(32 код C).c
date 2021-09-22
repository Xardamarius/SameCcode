#include <stdio.h>
#include <ctype.h>


int main(int argc, char *argv[])
{
    if(argc!=2){
        printf("Вы забыли указать своё имя.\n");
        exit(1);
    }
    printf("Привет, %s!", argv[1]);
    
    return 0;
}