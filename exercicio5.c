#include<stdio.h>
#include<stdlib.h>
int main()
{
    int v[20], v2[20], n =5;
    for(int i = 0; i < 20; i++)
    {
        v[i] = n;
        v2[i] = 2* v[i];
        n++;
        printf("Vetor 1 = |%d| vetor 2 = |%d|\n",v[i],v2[i]);
    }
    return(0);
}
