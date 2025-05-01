#include <stdio.h>

int main(){

int distanciatotal,diferenca;

printf("Digite a distancia percorrida: ");
scanf ("%d", &distanciatotal);

diferenca = distanciatotal * 2; //isso acontece porque o carro Y se afasta em 1 km a cada 2 min em relação ao carro X

printf("%d minutos\n", diferenca);

return 0;
}