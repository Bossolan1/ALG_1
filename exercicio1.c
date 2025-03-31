#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main()
  {

    setlocale(LC_ALL, "Portuguese");
    int n = 0, lim =0, soma = 0;
    printf("Quantos números deseja somar???\n");
    scanf("%d", &lim);

       for(int i = 0; lim > i; i++)
         {
           printf("Me diga o %d° valor \n", i+1);
           scanf("%d", &n);
           soma+= n;
         }
         printf("O valor da soma é de: %d\n", soma);
  }
