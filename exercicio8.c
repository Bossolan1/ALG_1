#include<stdlib.h>
#include<stdio.h>
#include<time.h>
int main()
{
    int v[10], aux = 0, t = 0;
    srand(time(NULL));
    for(int i = 0; i < 10; i++)
      {
        v[i] = rand() % 10;
        printf(" | %2d |", v [i]);
      }
    printf("\n Nesse vetor podemos observar o seguinte: \n");

    for(int i = 0; i < 10; i++)
      {
        aux = v[i];
        for(int j = i + 1; j < 10; j++)
        {
          if(v[i] == v [j])
          {
              t++;
          }
        }
        if(t >= 1)
        {
          printf("O valor %d se repete %d vezes\n", aux, t + 1);
          t = 0;
        }
        aux = 0;
      }
}
