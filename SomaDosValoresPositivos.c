#include <stdio.h>

int main(){

int constPositivos = 0;
float valor,soma = 0;

int i;
for ( i = 0; i < 6; i++)
{
    scanf("%f",&valor);
    if (valor > 0)
    {
         soma = soma + valor;
         constPositivos++;
    }
    
}

printf("%d valores positivos\n",constPositivos);
printf("%.1f\n",soma/constPositivos);

return 0;
}
