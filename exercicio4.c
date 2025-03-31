#include<stdio.h>
#include<stdlib.h>
int main()
{
    int v[10], n =21;
    for(int i = 0; i < 10; i++)
    {
        v[i] = n;
        n++;
        printf("%d\n",v[i]);
    }
    return(0);
}
