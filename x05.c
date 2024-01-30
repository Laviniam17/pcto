#include <stdio.h>


int main()
{
    int n1,n2,n3; 

    printf("Scrivi tre numeri\n");
    scanf("%d", &n1);
    scanf("%d", &n2);
    scanf("%d", &n3);

    if(n3-n2 == n2-n1){
        printf("è una progressione aritmetica\n");
    }
    else {
        printf("non è una progressione aritmetica\n");
    }
    

    return (0);
        
}