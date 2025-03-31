#include<stdlib.h>
#include<stdio.h>
#include<locale.h>
  int main()
    {
      setlocale(LC_ALL, "portuguese");
      int v[6] = {0,0,0,0,0,0}, totP = 0, totI = 0;
      for(int i = 0; 6 > i; i++)
        {
            printf("Qual é o %d° valor? \n", i+1);
            scanf(" %d", &v[i]);
        }
      for(int i =0; 6 > i; i++)
        {
          printf("O elemento %d com o valor %d é: ", i+1, v[i]);
          if(v[i] % 2 == 0)
          {
              printf("par\n");
              totP++;
          }
          else
          {
             printf("impar\n");
             totI++;
          }
        }
        printf("Neste conjunto de valores temos %d números pares e %d números impares\n", totP, totI);

    }
