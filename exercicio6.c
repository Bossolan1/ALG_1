#include<stdio.h>
#include<stdlib.h>
int main()
{
    int v[8], maior = 0;
    for(int i = 0; i < 8; i++)
    {
        printf("Me diga o %d° valor\n",i + 1);
        scanf("%d",&v[i]);
        if(v[i] > maior)
        maior = v[i];
    }
    printf("O maior valor é o de: %d\n",maior);
    return(0);
}
