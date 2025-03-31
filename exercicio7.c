#include<stdio.h>
#include<stdlib.h>
  int main()
  {
    int totpar=0, totimpar=0,somapar = 0,somaimpar = 0, n=0, i=1; 
    
    
   printf("me diga de 0 ate quantos voce deseja saber sobre soma par / impar \n");
   scanf("%d", &n);
   while (i < n)
    {
        if(i % 2 == 0)
        {
           totpar = totpar + 1;
           somapar = somapar + i;
        }
        if(i % 2 != 0)
        {
           totimpar = totimpar + 1;
           somaimpar = somaimpar + i;
        }
        i++;
    }
    printf("Total par: %d com soma de: %d | total impar: %d com soma de %d\n",totpar,somapar,totimpar,somaimpar);
    return(0); 
  }