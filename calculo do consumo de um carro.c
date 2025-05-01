#include <stdio.h>
int main(){

int distancia;
float litros, resultado;

printf("Digite a distancia percorrida e a quantidade de litros que gastou: ");
scanf("%d %f", &distancia, &litros);

resultado = (distancia/litros);

printf("%.3f km/l",resultado);

return 0;
}