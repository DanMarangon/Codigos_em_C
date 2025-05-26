#include <stdio.h>

int main(){

int numero,inter,gremio,vitoriasin,vitoriasgrem,empate,quantidadejogos;

vitoriasgrem = 0;
vitoriasin = 0;
empate = 0;
quantidadejogos = 0;

do
{

scanf("%d %d",&inter,&gremio);
if (inter > gremio)
{
    vitoriasin++;
    quantidadejogos++;
}

else if (inter == gremio){

empate++;
quantidadejogos++;

}
else
{
    vitoriasgrem++;
    quantidadejogos++;
}
 
printf("Novo grenal (1-sim 2-nao)\n");
scanf("%d",&numero);



    
} while (numero != 2);

printf("%d grenais\n",quantidadejogos);
printf("Inter: %d\n",vitoriasin);
printf("Gremio: %d\n",vitoriasgrem);
printf("Empates: %d\n",empate);
if (vitoriasgrem > vitoriasin)
{
    printf("Gremio venceu mais\n");
}
else{

    printf("Inter venceu mais\n");
}

return 0;
}
