#include <stdio.h>


int main()
{
    int n1, n2, n3;

    printf("Scrivi tre numeri\n");
    scanf("%d", &n1);
    scanf("%d", &n2);
    scanf("%d", &n3);


    if(n1 + n2 > n3 && n2 + n3 > n1 && n1 + n3 > n2){
        printf("è un triangolo\n");
    }
    else {
        printf("non è un triangolo\n");
    }


    return (0);
        
}