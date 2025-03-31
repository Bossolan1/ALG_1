#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int  main()
{
    int A[10], B[10], C[20], aux = 0;
    int Vaux[20], i = 0, j = 0, n = 0, tam = sizeof(C) / sizeof(int);
    srand(time(NULL));

    for(int i = 0; i < 20; i ++)
    {
        C[i] = 0;
    }

    printf("Vetor A: \n");
    for(int i = 0; i < 10; i++)
    {
        A[i] = rand() % 10;
        B[i] = rand() % 10;
        printf(" |%3d| ", A[i]);
    }
    printf("\n\nVetor B:  \n");
    for(int i = 0; i < 10; i++)
    {
        printf(" |%3d| ", B[i]);
    }
    printf("\n Interseccao entre os dois vetores:  \n");


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
    aux = 0;

    for(int i = 0; i < 20; i++)
    {
        C[i] = A[i];
        if(i >= 10)
        {
          C[i] = B[aux];
          aux++;
        }
        //printf(" | %d |", C[i]);
    }
    aux = 0;

    for(int i = 0; i < 20; i++)
    {
        for(int j = i + 1; j < 20; j++)
        {
            if(C[i] > C[j])
            {
                aux = C[i];
                C[i] = C[j];
                C[j] = aux;
            }
        }
    }

    for( i = 0; i < tam; i++)
    {
        for(j = 0; j < n; j++)
        {
            if(  C[i] == Vaux[j] )
            break;
        }

        if( j == n )
        {
            Vaux[n] = C[i];
            n++;
        }
    }

    for(int i = 0; i < n; i++)
    {
        printf(" | %d | ", Vaux[i]);
    }


    printf("\n\n");
    return(0);
}


/*
 * So far away, we wait for the day
 *For the lives all so wasted and gone
 *We feel the pain of a lifetime lost in a thousand days
 *Through the fire and the flames, we carry on
 */
