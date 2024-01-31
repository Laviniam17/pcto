#include <stdio.h>

int perimetro(int a, int b, int c)
{
    int perimetro;
    
    perimetro= a + b + c;
    return (perimetro);   
}

int area(int base, int h)
{
    int area;

    area=base*h/2;

    
    printf("l'area è: %d\n", area);

return(0);
}

int main()
{
    int a;
    int b;
    int c;
    printf("inserisci tre lati:");
    scanf("%d %d %d", &a, &b, &c);
    printf("int perimetro: %d\n", perimetro(a, b, c));

    return (0);
}