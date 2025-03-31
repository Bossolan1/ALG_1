#include<stdlib.h>
#include<stdio.h>

int main()
{
    int m[5][5] = {{1,2,3,4,5}, {6,7,8,9,10}, {11,12,13,14,15}, {16,17,18,19,20}, {21,22,23,24,25}};
    int soma = 0;
    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 5; j++)
        {
            printf(" |%d| ",m[i][j]);
            soma+= m[i][j];
        }
        printf("\n");
    }
    printf("A soma da matriz eh de %d\n", soma);
    soma = 0;

    //calculando a linha quatro
    for(int i = 0; i < 5; i++)
    {
        //printf("%d %d\n", m[1][1]);
        soma+= m[3][i];
    }
    printf("soma da linah 4 = %d \n",soma);
    soma = 0;
    //calculando coluna 2

    for(int i = 0; i < 5; i++)
    {
        soma+= m[i][1];
    }
    printf("soma da coluna 2 = %d \n",soma);
    soma = 0;
    for(int i =0; i < 5; i++)
    {
        printf(" %d \n",m[i][i]);
        soma+= m[i][i];
    }
    printf("%d \n", soma);
    return(0);
}
