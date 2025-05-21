#include <stdio.h>

int main(){

double nota,media,nota2;

do
{


    printf("Digite a nota: \n");
    scanf("%lf",&nota);

    if (nota < 0 || nota > 10)
    {
        printf("Nota Invalida\n");
    }


} while (nota < 0 || nota > 10);

do
{
    printf("Digite a nota: \n");
    scanf("%lf",&nota2);

   if (nota2 > 10 || nota2 < 0)
   {
    printf("Nota invalida\n");
   }
   
    
    
} while (nota2 < 0 || nota2 > 10);

media = (nota + nota2)/2;
printf("Media = %lf\n",media);




return 0;
}
