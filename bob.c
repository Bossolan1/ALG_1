#include<stdio.h>
int main()
{
    //  Vetor           Trocador
    //    V                V
    int A[3] = {1,2,3}, aux = 0;
    // quando i = 0
    // J vale 1;
    for(int i = 0; i < 3; i++)
    {
        printf(" |%d| ", A[i]);
    }
    printf("\n");
    for(int i = 0; i < 3; i++)
    {
        for(int j = i + 1; j < 3; j++)
        {
            if(A[i]<A[j])
            {
                printf("Antes : |%d| |%d|\n", A[i],A[j]);
                aux = A[i];
                A[i] = A[j];
                A[j] = aux;
                printf("Depois: |%d| |%d|\n", A[i],A[j]);
            }
        }
    }

    for(int i = 0; i < 3; i++)
    {
        printf(" |%d| ", A[i]);
    }
    printf("\n");
    return(0);
}
