#include <stdio.h>

void calcolatrice()
{
    int x;
    int y;
    int operazione= 0;

    printf("inserisci numero");
    scanf("%d", &x);
    printf("inserisci un secondo numero");
    scanf("%d", &y);

    printf("quale operazione vuoi eseguire su x e y");
    printf("inserisci 1 per +");
    printf("inserisci 2 per -");
    printf("inserisci 3 per *");
    printf("inserisci 4 per /");

    scanf( "%d", &operazione);

    if(operazione == 1 || operazione == 2 || operazione  == 3 || operazione == 4)
     {
        scanf("%d", &operazione);
    }

}
int main()
{
    calcolatrice();

}