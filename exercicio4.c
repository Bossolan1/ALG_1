#include<string.h>
#include<stdio.h>

int main()
{
    char n[100] = "";
    printf("Qual numero voce deseja ver ao contrario?\n");
    scanf("%s", n);
    for(int i = strlen(n); i >= 0; i--)
      {
        printf("%c ",n[i]);
      }
    printf("\n");
    return(0);
}
