#include <stdio.h>
#include <math.h>
int main(){

double pi,volume;
int raio;
pi = 3.14159;
printf("Digite o valor do raio: ");
scanf("%d", &raio);

volume = 4.0/3.0 * pi * pow(raio,3);

printf("VOLUME = %.3lf", volume);
return 0;

}