#include<stdlib.h>
#include<stdio.h>

int main()
{
    int m[5][5] = { {1,2,3,4,5}, {1,2,3,4,5}, {1,2,3,4,5}, {1,2,3,4,5}, {1,2,3,4,5}};
    for(int i =0; i < 5; i++)
    {
        for(int j = 0; j < 5; j++)
        {
            printf(" |%d| ", m[i][j]);
        }
            printf("\n");
    }
}
