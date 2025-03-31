#include<stdlib.h>
#include<stdio.h>

int main()
{
    int n = 0, t = 1;
    printf("Me diga um numero \n");
    scanf("%d", &n);
    while(n > 1)
    {
        n /= 10;
        t += 1;
    }
    printf("O tamanho eh de %d \n", t);
    return(0);
}
