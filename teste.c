#include <stdio.h>
#include <stdlib.h>
#include <math.h> //caso alguem use windows

int main()
  {
  int a = 0, b = 0, c = 0;

  printf("Me diga um valor para o lado A \n");
  scanf(" %d", &a);
  printf("Me diga um valor para o lado B \n");
  scanf(" %d", &b);
  printf("Me diga um valor para o lado C \n");
  scanf(" %d", &c);

  //Checa se o triangulo eh possivel
  if((((abs(a - b) < c) && (a + b > c)) &&  ((abs(a - c) < b) && (a + c > b))) && (((abs(b - c) < a)) && (b + c > a)))
   {   
    printf("Triangulo possivel, do tipo: ");
    //escaleno se:
    if((a != b && a != c) && (b != c))
      {
        printf("Triangulo Escaleno\n");
      }

    //isoceles se:
    if((((a != b || a != c) && (b == c)) || ((b != a || b != c) && (a == c))) || (((c != a || c != b) && (a == b))))
      {
        printf("Triangulo isoceles\n");
      }

    //equilatero se:
    if((a==b && a==c) && (b==c))
      {
        printf("Triangulo equilatero\n");
      }
    }


  else
    {
    printf("\t  Triangulo impossivel Tm\n");
    printf("\t\t   00\n");
    printf("\t\t  0000\n");
    printf("\t\t00000000\n");
    }

  return(0);
  }
