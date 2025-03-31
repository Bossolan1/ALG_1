#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    float matriz[13][13], maior = 0;
    srand(time(NULL));
    for(int i =0; i < 13; i++)
    {
        for(int j = 0; j < 13; j++)
        {
            matriz[i][j] = rand() % 50;
            printf(" |%5.2f| ",  matriz[i][j]);
        }
        printf("\n");
    }
    printf("\n\n\nNova matriz baseada na divisão da linha pelo maior: \n\n\n");
    for(int i =0; i < 13; i++)
        {
        for(int j = 0; j < 13; j++)
            maior = matriz[i][0];


            for(int j = 1; j < 13; j++) {
                if(matriz[i][j] > maior)
                {
                    maior = matriz[i][j];
                }
            }
            for(int j = 0; j < 13; j++)
            {
                matriz[i][j] /= maior;
            }
        }

        for(int i =0; i < 13; i++)
        {
            for(int j = 0; j < 13; j++)
            {
                printf(" |%5.2f| ",  matriz[i][j]);
            }
            printf("\n");
        }

}
