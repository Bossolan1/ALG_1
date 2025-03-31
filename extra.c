#include<stdlib.h>
#include<stdio.h>

  int main()
  {
     int  n[10], aux=0;
      for(int i = 0; i < 10; i++)
      {
        printf("Me diga um valor para N %d: \n",i+1);
        scanf(" %d", &n[i]);
      }
      //encontrando a sequencia
        for(int i = 0; i < 10; i++)
          {
            for(int j = i + 1; j < 10; j++)
            {
              if(n[i] > n[j])
                {
                  aux = n[i];
                  n[i] = n[j];
                  n[j] = aux;
                }
            }
          }
          for(int i =0; i < 10; i++)
          {
            printf(" |%d| ", n[i]);
          }
          printf("\n");
  }
