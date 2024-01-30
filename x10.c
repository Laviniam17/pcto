#include <stdio.h>


int main()
{
    int x;
    int y=2;
    int divisori= 0;

    printf("inserisci il numero");
    scanf("%d", &x);

    while(y < x) {
        if(x % y ==0){
            divisori = divisori + 1;
        }
        x= x+ 1;

    }
if(divisori=0){
    printf("primo\n");
}
else{
    printf("non è primo\n");
}

    return (0);
        
}