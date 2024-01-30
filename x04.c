#include <stdio.h>

int main()
{
    float n1,n2,n3; 

    printf("Scrivi una temperatura in gradi Celsius\n");
    scanf("%f", &n1);
    if(n1 < -273.15 ) {
        printf("errore\n");
        return(0);
    }
    n2 = 1.8 * n1 + 32;
    n3 = n1 + 273.15; 

    printf("il tuo valore in Farenheit è %f", n2);
    printf("il tuo valore in Kelvin è %f", n3);

    return (0);
        
}