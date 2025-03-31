#include<stdio.h>
#include<stdlib.h>

int main()
{
    int x =0, y =0, mdc = 1, maior = 0;
    printf("Me diga uma valor para X e para Y para eu lhe fornecer o mdc\n");
    scanf("%d %d", &x, &y);
    if(x > y)
    {
        maior = x;
    }
    else
    {
        maior = y;
    }

    for(int i = maior; i > 0 ; i--)
    {
        if((x % i == 0) && (y % i == 0))
        {
            mdc *= i;
            x /= i;
            y /= i;
        }
    }
    printf("Resutado :%d \n", mdc);
    return(0);
}
