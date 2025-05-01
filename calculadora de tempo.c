#include <stdio.h>

int main(){

int tempo, minutos,horas,horas2,segundos;

printf("Digite o valor em segundos: ");
scanf("%d",&tempo);

horas2 = tempo % 3600; // 556
horas = tempo/3600; // 0 
minutos = horas2/60; // 9 
segundos = horas2 % 60; // 16

printf("%d:%d:%d", horas,minutos,segundos);

return 0;

}

// Dan Ramos Marques Marangon, RA: 22502303