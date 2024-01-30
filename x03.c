#include <stdio.h>

int main()
{
    int n1;
    int n2;
    printf("Scrivi un numero");
    scanf("%d", &n1);
    printf("Scrivi un altro numero");
    scanf("%d", &n2);
    if(n1 % n2 == 0) {
        printf("è un multiplo\n");
    }
    else{
        printf("non è un multiplo\n");
    }
}
