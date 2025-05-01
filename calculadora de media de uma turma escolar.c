#include <stdio.h>

int main(){

int contador;
double nota,total,media;

contador = 1;
total = 0;

while(contador <= 40){

printf("Digite a nota do aluno: ");
scanf ("%lf", &nota);
contador ++;

total = total + nota;
}

media = total/40;

printf("A media da turma foi de: %.1lf\n", media);

return 0;
}