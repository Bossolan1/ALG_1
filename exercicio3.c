#include<stdio.h>

int main()
{
    int ne = 0;
    char v[100] = "" ;
    printf("Qual valor inteiro voce deseja descobrir um n-esino termo?\n");
    scanf("%s", v);
    printf("Qual termo voce deseja descobrir?\n");
    scanf("%d", &ne);
    printf("Bom o %d-termo eh: %c\n",ne, v[ne -1]);
    return(0);

}
