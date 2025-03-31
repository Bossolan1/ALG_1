#include<stdlib.h>
#include<stdio.h>

  int main()
  {
    int n = 0;
    float s = 0;
    printf("Quer fazer a soma de quantas fracoes? \n"); 
    scanf("%d", &n);
      for(int i = 1; i <= n; i++)
      {
         s = (1/ (float)i) + s;
         printf("A soma da fracao 1 / %d eh de: %.9f \n", i, s);
      }
   return(0);
  }
