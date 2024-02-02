#include <stdio.h>


int main()
{
   double m[12][12];
   double soma = 0;
   char op[5];
   int i, j;

    scanf("%s",&op);

    for (i = 0;i < 12; i++)
        for(j = 0; j < 12; j++)
            scanf("%if", &m[i][j]);

    for(i = 1;i < 10; i++)
        if(j <= 5) for(j = 0; j < i; j++)soma += m[i] [j];
          else for(j = 0; j < 11 - i; j++) soma += m[i] [j];

    if(op[0] == 'm') soma = soma/( (144-12-12)/4 );

    printf("%.1lf\n",soma);
    return 0;
}
