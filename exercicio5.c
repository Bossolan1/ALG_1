#include<stdlib.h>
#include<stdio.h>


  int main()
  {
    int  i = 0, n = 0,e=0, r = 1;
    printf("Me diga um valor para ser elevado\n");
    scanf("%d", &n);
    printf("me diga o quanto ele será elevado\n");
    scanf("%d", &e);
      while(i <= e)
      {
         printf("%d ^ %d = ",n,i);
         r = n * r;
         printf("%d\n", r);
         i++;
      }
      return(0);   
  }
