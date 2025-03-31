#include<stdlib.h>
#include<stdio.h>
#include<time.h>

int main()
{
    int v[10] , p = 0;
    srand(time(NULL));
    p = rand() % 9;
    for(int i = 0; i < 10; i++)
    {
        v[i] = rand();
        printf(" | %d |", v[i]);
    }

    printf("\nValor escolhido da vez foi o da posição %d com o valor de %d\n", p + 1, v[p] );
    return(0);
}
