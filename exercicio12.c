#include<stdlib.h>
#include<stdio.h>


    int main()
    {
      int n=2, i = 0, j = 0, p=0 , t = 0;
        while(i < 20000)
        {
            j = n;
            t = 0;
            while(j > 0)
            {
              if(n % j == 0)
              {
                t = t + 1;
              }
              --j;
            }
            if(t <= 2)
            {
              p = p + 1;
            }
            n++;
            i++;
        }
        printf("Total de primos: %d \n", p);
        printf("Total de I: %d \n", i);
      return(0);
    }