#include <stdio.h>

int main(){

char nome[50];
float salario,vendas;

scanf("%s %f %f",&nome, &salario, &vendas);
printf("TOTAL = R$ %.2f\n", (salario + (vendas*0.15)));

return 0;
}
// Nome: Dan Ramos Marques Marangon