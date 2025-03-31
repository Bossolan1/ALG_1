#include<stdio.h>
#include<stdlib.h>

int main()
{
    int i = 0;
    float p = 0;
    printf("Me informe sua idade\n");
    scanf("%d", &i);
    printf("Me informe o seu peso\n");
    scanf("%f", &p);

    if((i >=18 && i <= 69) && (p >=50))
    {
        printf("Pode doar sangue\n");
    }
    else
    {
        printf("Não pode doar sangue\n");
    }
    return(0);
}
