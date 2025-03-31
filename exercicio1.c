#include<stdio.h>
#include<stdlib.h>

  int main()
  {
    int n=0;
    printf("me diga um valor para regredir ate 0 no qual irei dizer seus quadrados \n");
    scanf("%d", &n);
    while(n > 0)
    {
      printf("O seu numero[%d] ao quadrado eh: %d \n",n, n*n);
      n--;
    }
    printf("Espero que tenha gostado do app s2");
  }