#include<stdlib.h>
#include<stdio.h>

int main()
{
    int v[3], c = 0;
    do
    {
        c++;
        for(int i = 0; i < 3; i++)
        {
            v[i] = -1;
        }
        for(int i = 0; i < 3; i++)
        {
            while(v[i] != 0  &&  v [i] != 1)
            {
                printf("Rodada %d!\n", c);
                printf("Jogador %d, me diga um valor [0] ou [1]\n", i+1);
                scanf("%d", &v[i]);
                //printf("você digitou o valor %d, lembre-se dele e aperte algua tecla para o proximo jogador escolher um valor!\n", v[i]);
                system("clear");
            }

        }
    }
    while(v[0] == v[1] && v[0] == v[2] && v[1] == v[2]);
    if(v[0] == v[1])
    {
        printf("Jogador vencedor foi o C, em um total de %d rodadas!\n", c);
        printf("Números ditos A = %d, B = %d, C = %d\n",v[0],v[1],v[2]);
    }
    if(v[0] == v[2])
    {
        printf("Jogador vencedor foi o B, em um total de %d rodadas!\n", c);
        printf("Números ditos A = %d, B = %d, C = %d\n",v[0],v[1],v[2]);
    }
    if(v[1] == v[2])
    {
        printf("Jogador vencedor foi o A, em um total de %d rodadas!\n", c);
        printf("Números ditos A = %d, B = %d, C = %d\n",v[0],v[1],v[2]);
    }

    return(0);
}
