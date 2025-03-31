#include<stdio.h>
#include<stdlib.h>

    int main()
    {
        float a[6], b[6], aux = 0;
        for(int i = 0; i < 6; i++)
          {
             printf("Me diga um valor para o Vetor A e depois do B com um espaco \n");
             scanf(" %f %f", &a[i], &b[i]);
          }
         for(int i = 0; i < 6; i++)
         {
             printf("Posicao 1 de A com valor %.2f +  B com valor %.2f = %.2f\n",a[i],b[i], a[i] + b[i]);
             aux = a[i] + b[i];
             a[i] = aux;
         }
         for(int i = 0; i < 6; i++)
         {
            printf("Valor atual de A = %.2f \n", a[i]);
         }
    }
