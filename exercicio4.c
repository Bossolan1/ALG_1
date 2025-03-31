#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main()
{
    int n = 0, som = 0, aux = 0, auxT = 0, auxC = 0, t = 0;
    setlocale(LC_ALL, "Portuguese");
    printf("Quantos primos você deseja encontrar?\n");
    scanf("%d", &n);
      for(int i = 2; auxC != n; i++)
        {
          aux = i;
          while(aux >= 1)
          {
            if(i % aux == 0)
            {
              t++;
            }
            aux--;
            if(t > 2)
            {
              break;
            }
          }
          if(t <= 2 && i != 1)
          {
            printf("Primo detectado! {%d} \n",i);
            auxT += i;
            auxC += 1;
          }
        t = 0;
        }
        printf("A soma dos %d primeiros primos eh de: %d\n",n,auxT);
}
