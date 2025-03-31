#include<stdio.h>
#include<stdlib.h>
  
  int main()
  {
    int n = 0, i = 0,r = 0;
    printf("Me diga um numero para N \n");
    scanf("%d", &n);
      while(n > i)
      {
        printf("N (%d) + I (%d) = %d \n",r, i, r + i);
        r = r + i;
        i++;
      }
    
    return (0);
  }