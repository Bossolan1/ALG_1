#include<stdlib.h>
#include<stdio.h>
  int main()
  {
    int sml = 0, big = 0, x = 0, i = 0,n = 0;
    printf("Quantos numeros deseja testar?\n");
    scanf("%d", &n);
      while (n > i)
      {
         printf("Me diga o %d valor \n", i + 1);
         scanf("%d", &x);
         if(big < x)
         {
           big = x;
         }
         if(sml > x)
         {
           sml = x;
         }
         if(i == 0)
         {
            sml = x;
         }
         i++;
      }
      printf("Maior: %d | menor: %d\n", big, sml);
      return(0);
  }

