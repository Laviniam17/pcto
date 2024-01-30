#include <stdio.h>

int main()
{
    int n1;
    int n2;
     printf("A quanti anni puoi prendere la patente in America?");
    scanf("%d", &n1);
    printf("Quanti anni hai?");
    scanf("%d", &n2);
    if(n2>=n1) {
        printf("puoi prendere la patente\n");
    }
    else{
        printf("non puoi prendere la patente\n");       
    }
}