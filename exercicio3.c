#include<stdio.h>
#include<stdlib.h>
  int main()
  {
    int n = 0, i = 0;
    printf("Me diga um valor para ir");
    scanf("%d", &n);
      while(n >= i)
      {
        if(i%2 != 0)
        {
          printf("Numero impar detectado! %d \n",i);
        }
        
        i++;
      } 
      return(0);
  }