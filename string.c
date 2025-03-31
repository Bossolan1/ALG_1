#include<stdlib.h>
#include<stdio.h>
//#include<conio.h>
int main()
{
    char str[100] = "";
    int i = 0;
    printf("Qual eh o seu nome?\n");
    scanf(" %s", str);
    printf("Nome = %s\n", str);
    while(str[i] != '\0')
    {
          i+= 1;
        //  printf(" 1 ");
    }
    printf("O tamanho eh de %d \n", i );
    return(0);
}
