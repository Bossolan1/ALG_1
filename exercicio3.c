#include<stdlib.h>
#include<stdio.h>

  int main()
  {
     int  n[5] = {0,0,0,0,0}, a=0, b=0, c=0, d=0, e=0, aux=0;
      for(int i = 0; i < 5; i++)
      {
        printf("Me diga um valor para N %d: \n",i+1);
        scanf(" %d", &n[i]);
      }      
      //encontrando a sequencia
        for(int i = 0; i < 5; i++)
          {
            printf("teste %d\n", i);
            for(int j = i + 1; j < 5; j++)
            {
              if(n[i] > n[j])
                {
                  aux = n[i];
                  n[i] = n[j];
                  n[j] = aux;
                }
            }
          }
          //escrevendo valores em suas respectivas letras sendo A maior e E menor
      a = n[0];
      b = n[1];
      c = n[2];
      d = n[3];
      e = n[4];

    printf("Em ordem crescente: %d | %d | %d | %d | %d \n",a,b,c,d,e);
    printf("Em ordem decrescente: %d | %d | %d | %d | %d \n",e,d,c,b,a);
  }
