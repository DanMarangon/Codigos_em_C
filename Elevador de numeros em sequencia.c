#include <stdio.h>
#include <math.h>
int main(){

int x,i,valor,valor2;

printf("Digite o numero: \n");
scanf("%d",&x);

if (x > 1 && x < 1000)
{
    
for ( i = 0; i < x; i++)
{
valor = pow(i,2);
valor2 = pow(i,3);

printf ("%d %d %d\n", i,valor,valor2);
}
}




return0;
}
