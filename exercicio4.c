#include<stdio.h>
#include<stdlib.h>

int main()
{
    int i = 0;
    char s = 'm';
    printf("Me informe sua idade\n");
    scanf("%d", &i);
    printf("Me informe o seu sexo\n");
    scanf(" %c", &s);

    if((i >=18) && (s == 'm' || s =='M'))
    {
        printf("você deve se alistar!\n");
    }
    else
    {
        printf("Neste caso você Não precisa servir, grato!\n");
    }

    if((i >=18) && (s == 'f' || s =='F'))
    {
        printf("você deve pode se alistar (voce deseja isso? [s]/[n]) \n");
        scanf(" %c", &s);
        if(s == 's' || s == 'S')
        {
            printf("Então pode se alistar senhora, seja bem vinda ao exercito brasileiro!\n");
        }
        else
        {
            printf("Neste caso você Não precisa servir, grato!\n");
        }
    }

    return(0);
}
