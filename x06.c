#include <stdio.h>


int main()
{
    int anno;

    printf("Scrivi un anno\n");
    scanf("%d", &anno);


    if(anno%4==0 && anno%100!= 0){
        printf("è un anno bisestile\n");
    }
    else {
        printf("non è un anno bisestile\n");
    }


    return (0);
        
}