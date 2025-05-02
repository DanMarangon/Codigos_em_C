#include <stdio.h>

int main(){

double valor,imposto;

printf("Digite o valor: ");
scanf("%lf",&valor);

if (valor > 0 && valor <= 2000)
{
    printf("Isento");
}

else if (valor > 2000 && valor <= 3000){

imposto = ((1000*0.08)*(valor-3000) * 0.18);
printf("R$ %.2lf", imposto);

}
else if (valor > 3000 && valor <= 4500){

imposto = ((1000*0.08)*(1500*0.18) + (valor - 4500) * 0.28);
printf("R$ %lf", imposto);

}
else if (valor > 4500){

imposto = ((1000*0.8) + (1500*0.18) + (valor - 4500) * 0.28);
printf("R$ %lf", imposto);

}

return 0;
}
