#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    int log[10], ling[8];
    srand(time(NULL));
    for(int i =0; i < 10; i++)
    {
        if(i <= 7)
        {
            ling[i] = rand() % 10;
        }
        log[i] = rand() % 10;
    }
    printf("Lógica matemática:\n");
    for(int i = 0; i < 10; i++)
    {
    printf("[%d]",log[i]);
    }
    printf("\n");
    printf("Programação\n");
    for(int i = 0; i < 8; i++)
    {
        printf("[%d]",ling[i]);
    }
    printf("\nMatrículas repetidas (Nas duas matérias:):\n");
    for(int i =0; i < 10; i++)
    {
        for(int j =0; j < 8; j++)
        {
            if(log[i] == ling[j])
            {
                printf("Aluno portador da matrícula| %d |\n",log[i]);
            }
        }
    }
    return(0);
}
