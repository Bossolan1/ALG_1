#include<stdio.h>
#include<stdlib.h>
//#include<conio.h>
#include<time.h>
    int main()
    {
        int m[15][15], t = 0, c = 0;
        srand(time(NULL));
        for(int i = 0;i < 15;i++)
        {
            for(int j = 0; j < 15; j++)
            {
                m[i][j] = rand() % 15;
                printf(" | %.2d | ", m[i][j]);
            }
            printf("\n\n");
        }
        for(int i = 1; i < 15; i++)
        {
            for(int j = 0; j < 15; j++)
            {
                for(int k = 0; k < 15; k++)
                {
                    for(int l = 0; l < 15; l++)
                    {
                        if(m[i][j] == m[k][l])
                        {
                            t += 1;
                        }
                    }
                    printf("O valor %d se repete %d\n" ,m[i][j], t);
                    t = 0;
                }
            }
        }


    }
