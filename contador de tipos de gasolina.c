#include <stdio.h>
int main (){


int codigo ,alcool, gasolina, diesel;

alcool = 0;
gasolina = 0;
diesel = 0;
do
{
    printf("Digite o codigo: \n");
    scanf("%d",&codigo);
switch (codigo)
    {
    case 1:
        gasolina = gasolina + 1;
break;
    case 2:
        alcool = alcool + 1;
break;
    case 3: 
        gasolina = gasolina + 1;
break;
    case 5: 
        diesel = diesel + 1;
break;

default:
printf("Codigo invalido. Tente novamente\n");
} }while (codigo != 4);



printf("MUITO OBRIGADO\n");
printf("Alcool: %d\n", alcool);
printf("Gasolina: %d\n",gasolina);
printf("Diesel: %d\n",diesel);
return 0;

}
