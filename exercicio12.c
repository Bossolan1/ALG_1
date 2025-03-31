#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    int A[10], B[10], aux=0;
    int Vaux[10], Vaux2[10], i = 0, j = 0, n = 0, n2 = 0, tam = sizeof(A) / sizeof(int), tam2 = sizeof(B) / sizeof(int);
    srand(time(NULL));
    for(int i = 0; i < 10; i++)
    {
        A[i]=rand()%10;
        B[i]=rand()%10;
    }
    for(int i = 0; i < 10; i++)
    {
        for(int j = i + 1; j < 10; j++)
        {
            if(A[i] > A[j])
            {
                aux = A[i];
                A[i] = A[j];
                A[j] = aux;
            }

            if(B[i] > B[j])
            {
                aux = B[i];
                B[i] = B[j];
                B[j] = aux;
            }
        }
    }

    for( i = 0; i < tam; i++)
    {
        for(j = 0; j < n; j++)
        {
            if(  A[i] == Vaux[j] )
                break;
        }

        if( j == n )
        {
            Vaux[n] = A[i];
            n++;
        }
    }

    printf("Conjunto A: \n");
    for(int i = 0; i < n; i++)
    {
        printf(" | %d | ", Vaux[i]);
    }

    printf("\n");

    for( i = 0; i < tam2; i++)
    {
        for(j = 0; j < n2; j++)
        {
            if(  B[i] == Vaux2[j] )
                break;
        }

        if( j == n2 )
        {
            Vaux2[n2] = B[i];
            n2++;
        }
    }

    printf("Conjunto B: \n");
    for(int i = 0; i < n2; i++)
    {
        printf(" | %d | ", Vaux2[i]);
    }
    printf("\n");

    printf("União entre os dois conjuntos: \n");

    if(n > n2)
    {
        aux = n;
    }
    else
    {
        aux = n2;
    }

    printf("{");
    for(int i = 0; i < aux; i++)
    {
        for(int j =0; j < aux; j++)
        {
        if(Vaux[i] == Vaux2[j])
        {
            printf(" %d,", Vaux[i]);
        }
        }
    }
    printf("}\n");
    return(0);
}
