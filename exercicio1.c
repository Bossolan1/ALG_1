#include<stdio.h>
#include<stdlib.h>

int main()
{
    int x =0, y = 0;
    printf("Me diga dois valores\n");
    scanf("%d %d",&x,&y);
    if(x>y)
    {
        printf("%d > %d\n",x,y);
    }
    else
    {
        printf("%d > %d\n",y,x);
    }
    return(0);
}
