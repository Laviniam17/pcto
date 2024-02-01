#include <stdio.h>

void fattoriale(int x)
{
    int fattoriale=1;
    if(x > 0)
    {
        int i=1;
        while(i <= x)
        {
            fattoriale=fattoriale*i;
            i = i + 1;
        }
        printf("%d", fattoriale);
    }
}
   int main()
{
    int x;
    printf("inserisci numero\n");
    scanf("%d", &x);
    fattoriale(x);
    return(0);
}     
    