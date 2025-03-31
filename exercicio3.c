#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main()
{

    setlocale(LC_ALL, "Portuguese");
    int n = 0, tam = 0, aux =0;
      printf("Me diga um valor para converter para binário\n");
      scanf("%d", &n);
        //determinar o tamanho do binário
        aux = n;
        while(aux > 0)
          {
            aux = aux / 2;
            tam += 1;
          }
        int bin[tam];
        //transformando o valor em binário;
        for(int i = 0; i < tam; i++)
          {
              if(n%2 == 0)
                {
                  bin[i] = 0;
                }
              else
                {
                  bin[i] = 1;
                }
                n = n/2;
          }
        //saida
        printf("Aqui está o seu valor em binário:");
        for(int i = tam - 1; i >= 0; i--)
          {
             printf(" %d ", bin[i]);
          }
          printf("\n");

}
