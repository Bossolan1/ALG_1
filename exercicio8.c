#include<stdlib.h>
#include<stdio.h>
  int main()
  {
    int i = 0, r = 1, n = 0;
    //entrada
    printf("Digite um numero para ser fatoriado:\n");
    scanf("%d", &n);
    i = n;
    printf("%d! =", n );

    //processamento
    while(i > 0)
    {
        if(i != 1)
        {
        printf(" %d *", i);
        //r = fatorial, i = valor a ser multiplicado
        r = i * r;
        }
        //else
        //{
        //printf(" %d", i);
        //}
        i--;
    }
    printf(" => %d \n", r);
    return(0);
  }

  // r = i * r
  // 1 = 4 * 1
  // 4 = 3 * 4
  // 12 = 12 * 2
  // 24 = 24 * 1
