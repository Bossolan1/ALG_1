#include<stdio.h>
#include<string.h>
int main()
{
    char n[100] = " ";
    int j = 0, v = 1;
    printf("me fale um valor para N \n");
    scanf("%s", n);
    for(int i = strlen(n); i > 0; i--)
    {
        if(n[i -1] != n[j])
        {
            printf("o valor %s nao eh um valor palindromo\n", n);
            v = 0;
            break;
        }
        j++;
    }
    if(v == 1)
    {
        printf("%s eh um palindromo bem bunito\n" , n);
    }
  return(0);
}
