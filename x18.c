#include <stdio.h>
#include <math.h>
int main ()
{
    int a;
    int b;
    int c;
    int p;
    int A;

    printf("Inserisci le misure dei tre lati\n");
    scanf(" %d", &a);
    scanf(" %d", &b);
    scanf(" %d", &c);
    p=(a+b+c)/2;
    A=p*(p-a)*(p-b)*(p-c);

    if(A>0)
    {
        printf("il perimetro è: %d cm.\n", a+b+c);
        printf("l'area è %f cmq\n", sqrt(A));

    }
    else
    {
    printf("il triangolo non esiste");
    }
    
    return(0);
}

