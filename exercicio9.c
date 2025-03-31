#include<stdlib.h>
#include<stdio.h>
  int main()
  {
    int i = 0, j = 0, n = 0, c = 0, r=0;
    printf("Me diga um valor para N|I|J\n");
    scanf("%d %d %d", &n, &i, &j);

    while(c < n)
    {
       if((r % i == 0) || (r % j == 0))
       {
            printf("| %d |", r);
            c++;
       }
       r++;
    }
    printf("\n");
    return(0);
  }
