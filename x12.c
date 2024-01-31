#include <stdio.h>


int main()
{
    int x=0;
    int y=0;
    int z= 0;

    while(x>=0) {

       printf("inserisci un numero\n");
       scanf("%d", &x);

       if(x>0){
         z= z + 1;
        y= y+x;
       }
     
    } 
    y=y/z;
    printf("la media è %d\n", y);

    return(0);
}
        