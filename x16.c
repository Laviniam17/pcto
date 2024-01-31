#include <stdio.h>

void calcolatrice()
{
    int x;
    int y;
    char operazione;

    printf("inserisci numero\n");
    scanf(" %d", &x);

    printf("inserisci un secondo numero\n");
    scanf(" %d", &y);

    printf("quale operazione vuoi eseguire su x e y?\n");
    scanf( " %c", &operazione);

   
     
        if(operazione == '+' ) 
        {
            printf("somma= %d", x+y);
        }
        else if(operazione == '-' )
        {
        printf("sottrazione= %d", x-y);
        }
        else if(operazione == '*' )
        {
         printf("moltiplicazione= %d", x*y);
        }
        else if(operazione == '/' )
        {
        printf("divisione= %d", x/y);
        }
    

}
int main()
{
    calcolatrice();

}