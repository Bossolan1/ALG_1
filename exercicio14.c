#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    int m[3][3], soma = 0;
    srand(time(NULL));
    for(int i = 0; i < 3; i++)
    {
        for(int j =0; j < 3; j++)
        {
            m[i][j] = rand() % 9 ;
            printf("%d", m[i][j]);
        }
        printf("\n");
    }
    for(int i = 0; i < 3; i++)
    {
        for(int j = 1 + i; j < 3; j++)
        {
            soma += m[j][i];
        }
    }
    printf("A soma dos valores abaixo da diagonal principal eh de: %d\n",soma);
    return(0);
}
