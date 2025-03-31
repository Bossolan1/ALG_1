#include<stdlib.h>
#include<stdio.h>

  int main()
  {
    int n = 0, t = 1;
    // float t2 = 0;
    printf("Me diga um valor positivo inteiro \n");
    scanf("%d", &n);
    for(int i = 0; i <= n; i++)
    {
      t = t + (1*i);
      printf("fazendo a adicao 1 + 1 * %d eh: %d \n", i, t);
    }
    printf("No total temos o seguinte resultado: para %d/%d ",t,n);
    //t2 = (float)t / (float)n;
    printf("R: %f \n", (float)t / (float)n );
    return(0);
  }
