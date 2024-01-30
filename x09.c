#include <stdio.h>


int main()
{
    int anno1;
    int anno = 1969;

    printf("Quando sei nato?\n");
    scanf("%d", &anno1);
   
    if(anno1 == anno) {
        printf("sei nato lo stesso anno in cui l'uomo è andato sulla Luna\n");
    }
    else if(anno1 < anno) {
        printf("sei nato %d anni prima del 1969\n", (anno - anno1));
    }
    else if(anno1 > anno) {
        printf("sei nato %d anni dopo del 1969\n", (anno1 - anno));
    }

    return (0);
        
}