#include <stdio.h>

void carattere()
{
    char vocale;

    
    printf("scrivi un carattere c\n");
    scanf(" %c", &vocale);

    if(vocale >= 65 && vocale<= 90 || vocale >= 97 && vocale <= 122) 
    {
        if(vocale=='a'||vocale=='e'||vocale=='i' ||vocale=='o' || vocale== 'u')
        {
            printf("è una vocale");
            
        }
        else{
            printf("non è una vocale");
        }
    }

}

int main()
{
    carattere();

    return(0);
}