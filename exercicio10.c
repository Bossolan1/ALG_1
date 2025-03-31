#include<stdlib.h>
#include<stdio.h>
  int main()
  {
    int n=0, t=0, i=0;
    
    
    printf("me diga um valor para checarmos se ele eh primo\n");
    scanf("%d", &n);

    i = n;
    while(i >= 1)
    {
        if(n % i == 0)
        {
          t = t + 1;
        }
        i--;
    }
    if(t <= 2)
    {
       printf("eh primo\n");
    }
    else
    {
       printf("nao eh primo\n");
    }


    return(0);
  }