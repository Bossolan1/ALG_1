#include<stdio.h>
#include<stdlib.h>
//#include<conio.h>
#include<time.h>
int main()
{
    int m[15][15], t = 0, aux = 0, totN[16];
    srand(time(NULL));
    for(int i = 0;i < 15;i++)
    {
        for(int j = 0; j < 15; j++)
        {
            m[i][j] = rand() % 15;
            printf(" | %2d | ", m[i][j]);
        }
        printf("\n\n");
    }
    for(int i = 0; i <= 15; i++)
    {
        totN[i] = i;
    }

    for(int k = 0; k <= 15; k++)
    {
        for(int i = 0; i < 15; i++)
        {
           for(int j = 0; j < 15; j++)
           {
             if(m[i][j] == k)
             {
               totN[k] += 1;
             }
            }
        }
    }
    for(int i = 0; i <= 15; i++)
    {
    printf("valor %d = %d \n", i, totN[i]);
    }
}
