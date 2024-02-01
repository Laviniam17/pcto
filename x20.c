#include <stdio.h>


void massimo(int x, int y)

{
    int x;
    int y;

    printf("inserisci numero:\n");
    scanf("%d", &x);
    printf("inserisci un secondo numero:\n");
    scanf("%d", &y);

    if(x<y)
    {
        printf("%d è maggiore di %d", y, x);
    
    }
    else 
    {
    printf("%d è maggiore di %d", x, y);
    }

}
    
   int main()
{

   massimo();
   
 return(0);
} 