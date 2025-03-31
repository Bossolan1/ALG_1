#include<stdio.h>
#include<stdlib.h>
  int main()
  {
    int i=0, n = 0, temp = 0, m = 0;
    
    
    printf("Me diga o número de temperaturas que serao medidas:\n");
    scanf("%d", &n);
    
    while(n > i)
    {
      printf("Me diga a temperatura n: %d\n",i+1);
      scanf("%d",&temp);
      i++;
      m = (temp + m);
    }
    m = m/n;
    printf("A media de temperatura eh de: %d \n", m);
    return(0);
  }