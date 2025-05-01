#include <stdio.h>

int main(){

double A,B,C;

printf("Digite os valores de A,B,C:\n ");
scanf("%lf %lf %lf",&A,&B,&C);

if (A + B > C && C+A > B && C+B > A)
{

    double perimetro;
perimetro = A + B + C;

printf("Perimetro = %.1lf\n", perimetro);

}

else
{ 
double Trapezio;

    Trapezio = ((A+B)*C)/2.0;

    printf("Área = %.1lf\n", Trapezio);

}

    return 0;
}


// Dan Ramos Marques Marangon, RA: 22502303