#include<stdlib.h>
#include<stdio.h>

  int main()
    {
       int n = 0;
         for(int i = 0; i < 10; i++)
           {
             printf("Me fale o %d° valor \n", i+1);
             scanf(" %d", &n);
             printf("O valor digitado foi %d", n);
               if(n > 25 && n < 85)
                 {
                    printf(" e este eh maior que 25 e eh menor que 85!!!\n");
                 }
               else
                 {
                    printf("\n");
                 }
           }
    }
