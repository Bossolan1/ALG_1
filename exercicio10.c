#include<stdlib.h>
#include<stdio.h>
#include<time.h>
int main()
{
    int A[10], aux = 0;
    srand(time(NULL));
    for(int i = 0; i < 10; i++)
    {
        A[i] = rand() % 100;
        printf(" |%3d| ", A[i]);
    }
    for(int i = 0; i < 10; i++)
    {
        for(int j = i + 1; j < 10; j++)
        {
            if(A[i] < A[j])
            {
                aux = A[i];
                A[i] = A[j];
                A[j] = aux;
            }
        }
    }
    printf("\nEm ordem decrescente: \n");
    for(int i = 0; i < 10; i++)
    {
        printf(" |%3d| ", A[i]);
        if(i == 9)
        {
            printf("\n");
        }
    }
}
