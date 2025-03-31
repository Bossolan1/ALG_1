#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main()
{

    setlocale(LC_ALL, "Portuguese");
    int ide = 0, lim =0, tot18 = 0, totS = 0, medS = 0;
    printf("Quantos idades deseja cadastrar\n");
    scanf("%d", &lim);

    for(int i = 0; lim > i; i++)
    {
        printf("Me diga a %d° idade \n", i+1);
        scanf("%d", &ide);
          if(ide >= 18)
            {
               tot18 += 1;
            }
          else
            {
                totS += 1;
                medS += ide;
            }
    }
    printf("O número de pessoas maiores de idade é de  : %d\n", tot18);
    printf("A média de idades dos menores de idade é de: %.2f\n", (float)medS / totS);
}
