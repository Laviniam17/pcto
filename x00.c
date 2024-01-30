#include <stdio.h>

int main()
{
    int n1;
   printf("quanti anni ho?");
   scanf("%d", &n1);
   if(n1>=18) {
        printf("sei maggiorenne\n");
    }
    else{
        printf("sei minorenne\n");
    }
} 
