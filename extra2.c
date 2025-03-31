#include<stdlib.h>
#include<stdio.h>
    int main()
    {
        int m[3][3], soma = 0;
        for(int i = 0; i < 3; i++)
        {
            for(int j =0; j < 3; j++)
            {
            m[i][j] = i + 1;
            printf("%d" ,m[i][j]);
            }
            printf("\n");
        }
        for(int i = 0; i < 2; i++)
        {
            soma += m[i][i+1];
        }
        printf("A soma da linha pricipal de eh de %d \n",soma);
    }


