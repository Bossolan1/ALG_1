#include<stdlib.h>
#include<stdio.h>


    int main()
    {
       int n = 3, t = 0 , i = 0, j=0, gm = 0,aux=0;
       while(j < 498)
       {
         i = n;
         t = 0;
         while(i >= 1)
         {
             if(n % i == 0)
             {
               t = t + 1;
             }
             i--;
         }   
         n = n + 2;
         i = n;
         aux = 0;
         while(i >= 1)
         {
             if(n % i == 0)
             {
               aux = aux + 1;
             }
             i--;
         } 
         if((aux <= 2) && (t <= 2))
         {
           gm = gm + 1;
         } 
      j++;
      }
       printf("Temos quantos gemeos? R: (%d)\n", gm);
       return(0);
    }