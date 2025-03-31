#include<stdlib.h>
#include<stdio.h>

  int main()
  {
     int n[8];
     for(int i = 0; i < 8; i++)
       {
          printf("Qual eh o %d° valor? \n", i + 1);
          scanf("%d", &n[i]);
       }
     for(int i = 0; i < 8; i++)
       {
         if(n[i] % 2 == 0)
         {
           printf("O valor %d eh multiplo de 2", n[i]);
           if(n[i] % 3 == 0)
           {
             printf(" e tambem eh mutiplo de 3\n");
             continue;
           }
         }
         else
         {
            printf("\n");
         }
         if(n[i] % 3 == 0)
           {
             printf("O valor %d eh multiplo de 3 \n", n[i]);
           }
       }
       return(0);
  }
