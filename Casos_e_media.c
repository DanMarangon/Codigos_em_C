#include <stdio.h>

int main(){

int cont,casos;
float nota1,nota2,nota3,total,media;

scanf("%d",&casos);

for ( cont = 1; cont <= casos; cont++)
{
     scanf("%f %f %f",&nota1,&nota2,&nota3);

     total = (nota1*2.0 + nota2 * 3.0 + nota3 * 5);

     media = total/10.0;


     printf("%.1f\n",media);
}



return 0;
}
