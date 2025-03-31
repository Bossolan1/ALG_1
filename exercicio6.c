#include<stdlib.h>
#include<stdio.h>
#include<time.h>
int main()
{
    int v[10], p[2], aux;
    srand(time(NULL));
    for(int i = 0; i < 10; i++)
      {
        v[i] = rand() % 100;
        printf(" |%3d| ", v[i]);
      }


      printf("\nLogo acima você pode observar um vetor de tamanho 10, com valores aleatórios, escolhe um ae para trocar s2\nPara isso basta me dizer dois números entre 0 e 10\n");
      scanf("%d %d", &p[0] , &p[1]);
      aux = v[p[0] - 1];
      v[p[0] - 1] = v[p[1] -1];
      v[p[1] - 1] = aux;

      for(int i = 0; i < 10; i++)
      {
        printf(" |%3d| ", v[i]);
      }

      printf("Olha que legal :D a troca foi feita!!! \n");
    return(0);
}
