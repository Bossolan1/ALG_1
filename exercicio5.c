#include<stdio.h>

int main()
{
    /* Existem três formas de calcular a potência em resistores: (1) P = i.U; (2) P = R.i^2; e (3)
     P = U^2/R, sendo P *a potência, i a corrente elétrica, U a tensão e R a resistência. Faça
     um programa que apresente o resultado da potência de acordo com a situação do
     momento, por exemplo, para o caso de não haver corrente ou não haver tensão.
     Exemplo: Entrada: i, U e R - Processamento: i = 0? Então P = U^2/R, não U = 0? Então P
     = Rxi^2 - Saída: P.*/
    int U = 0, I =0, R = 0;
    printf("Se não souber um deles digite 0\n");
    printf("Me diga um valor para a tensao(U)\n");
    scanf("%d",&U);
    printf("Me diga um valor para a corrente(I)\n");
    scanf("%d",&I);
    printf("Me diga um valor para a Resistencia(R)\n");
    scanf("%d",&R);
    if(U != 0  && I != 0)
    {
        printf("Formula A detectada Vulgo I * U\n");
    }
    if(R != 0 && I != 0)
    {
        printf("Formula B detectada Vulgo R * I²\n");
    }
    if(U !=0 && R !=0)
    {
        printf("Formula C detectada Vulgo U² / R\n");
    }
    return(0);
}
