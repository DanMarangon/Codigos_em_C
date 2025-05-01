#include <stdio.h>
#include <math.h>
int main(){

float A,B,C, Delta,raiz1,raiz2;

printf("Digite os valores de A,B e C: ");
scanf("%f %f %f",&A,&B,&C);

Delta = pow(B,2) - 4*A*C;

raiz1 = (-B + sqrt(Delta))/(2*A);
raiz2 = (B + sqrt (Delta))/(2*A);

if (Delta < 0)
{
    printf("Impossível calcular");
}

if (A == 0)
{
    printf("Impossivel Calcular\n");
}

else{
printf("R1 = %.5f\n",raiz1);
printf("R2 = %.5f\n",raiz2);
}
return 0;
}

// Dan Ramos Marques Marangon, RA: 22502303