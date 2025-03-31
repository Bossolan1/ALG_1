#include<stdio.h>
#include<stdlib.h>

int main()
{
    int d = 0, m = 0 , a = 0;
    printf("Me diga um dia\n");
    scanf("%d",&d);
    printf("Me diga um mes\n");
    scanf("%d",&m);
    printf("Me diga um ano\n");
    scanf("%d",&a);
    if(a % 4 == 0 && a > 0)
    {
        if(m == 2 && (d >=1 && d <= 29))
        {
            printf("Data possível (ano bisexto mes 2)\n");
        }
        if(m % 2 == 0)
        {
            if(d >= 0 && d <= 30 && m >=1 && m <=12)
            {
              printf("data valida (ano bisexto mes par)\n");
            }
        }
        else
        {
            if(d >= 0 && d <= 31)
            {
                printf("data valida (ano bisexto mes impar)\n");
            }
        }
    }
    else
    {
        if(m == 2 && (d >=1 && d <= 28))
        {
            printf("Data possível (ano normal mes 2)\n");
        }
        if(m % 2 == 0)
        {
            if(d >= 0 && d <= 30 && m >=1 && m <=12)
            {
                printf("data valida (ano normal mes par)\n");
            }
        }
        else
        {
            if((d >= 0 && d <= 31) && (m >=1 && m <=12))
            {
                printf("data valida (ano normal mes impar)\n");
            }
        }

    }

    return(0);
}
