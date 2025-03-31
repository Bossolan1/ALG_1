#include<stdlib.h>
#include<stdio.h>
  int main()
    {
      int matriz[5][5], soma  = 0, ent = 0, n = 0, h = 0, aux = 0;
        for(int i =0; i < 5; i++)
        {
          for(int j = 0; j < 5; j++)
          {
            printf("Qual sera a entrada para linha %d e coluna %d? \n", i + 1, j + 1);
            scanf("%d", &ent);
            matriz[i][j] = ent;
          }
        }

        system("clear");

        for(int i =0; i < 5; i++)
        {
            for(int j = 0; j < 5; j++)
            {
                n = matriz[i][j];
                printf(" [%d] ", matriz[i][j]);
                soma += matriz[i][j];
            }
            printf("a soma dessa linha eh de : %d", soma);
            soma = 0;
            printf("\n");
        }

        printf("\n\n\n");

        for(int i = 0;i < 5; i++)
        {
          printf("Na linha %d temos: \n", i + 1);
          for(int j = 0 ; j < 5; j++)
          {
          n = matriz[i][j];
          h = n;
          while(h >= 1)
          {
            if(n % h == 0)
            {
              aux = aux + 1;
            }
            h--;
          }
            printf("Na posicao linha[%d]  coluna[%d] com valor [%d]", i + 1, j + 1, matriz[i][j]);
            if(aux <= 2 || matriz[i][j] == 2)
            {
              printf("eh numero primo\n");
            }
            else
            {
              printf("nao eh um numero primo\n");
            }
            aux = 0;
            }
          }
        }
