#include <stdio.h>


int main()
{
    int costo=5;
    int unita;
    int totale;
    

    while(unita>0){
     printf("inserisci unita\n");
    scanf("%d", &unita);


    if(unita<30) 
    {
        totale= costo*unita;
        printf("nessuno sconto\n");
        printf("il totale è %d\n", totale);
    }
    else if(unita>=30 && unita<50)
    {
        totale= costo*unita;
        printf("%f", (0.1 * totale));
    }

    else if(unita>=50)
    {
        totale= costo*unita;
         printf("%f", (1.5 * totale));
    }
}
    

    return(0);
}
        