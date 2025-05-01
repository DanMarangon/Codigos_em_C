#include <stdio.h>

int main(){

float dinheiro;
int nota_de_50_2, nota_de_100,nota_de_50,nota_de_20, nota_de_20_2,nota_de_10,nota_de_10_2, nota_de_5,nota_de_5_2, nota_de_2_2, nota_de_2, centavos,moeda_de_1real,moeda_de_50centavos,moeda_de_25centavos,moeda_de_10centavos,moeda_de_5centavos,moeda_de_1centavo;
printf("Digite o valor: ");
scanf("%f", &dinheiro);

int dinheiro_inteiro = (int)dinheiro;

nota_de_100 = dinheiro_inteiro/100; // 5
nota_de_50_2 = dinheiro_inteiro % 100; // 76
nota_de_50 = nota_de_50_2/50; // 1 nota de 50 e sobrou 26
nota_de_20_2 = nota_de_50_2 % 50; // 26
nota_de_20 = nota_de_20_2 / 20; // vai dar 1 nota de 20 e vai sobrar 6
nota_de_10_2 = nota_de_20_2 % 10;
nota_de_10 = nota_de_10_2 / 10;
nota_de_5_2 = nota_de_10_2 % 5; // pegando o resto que não cabe em nota de 10
nota_de_5 = nota_de_10_2 / 5;
nota_de_2_2 = nota_de_5_2 % 2; // pegando o resto que não cabe em nota de 5
nota_de_2 =  nota_de_2_2 / 2;

centavos = (dinheiro*100 + 0.5) - (dinheiro_inteiro * 100);

if(dinheiro_inteiro % 2 == 0){
moeda_de_1real = 1;

}

else{

    moeda_de_1real = 0;
}
moeda_de_50centavos = centavos / 50; 
moeda_de_25centavos = (centavos % 50) / 25; 
moeda_de_10centavos = (centavos % 25) / 10;
moeda_de_5centavos = (centavos % 10) / 5;
moeda_de_1centavo = (centavos % 5) / 1;


printf("NOTAS:\n");
printf("%d nota(s) de R$ 100,00\n", nota_de_100);
printf("%d nota(s) de R$ 50,00\n", nota_de_50);
printf("%d nota(s) de R$ 20,00\n",nota_de_20);
printf("%d nota(s) de R$ 10,00\n",nota_de_10);
printf("%d nota(s) de R$ 5,00\n",nota_de_5);
printf("%d nota(s) de R$ 2,00\n",nota_de_2);
printf("MOEDAS:\n");
printf("%d moeda(s) de R$ 1,00\n",moeda_de_1real);
printf("%d moeda(s) de R$ 0,50\n",moeda_de_50centavos);
printf("%d moeda(s) de R$ 0,25\n",moeda_de_25centavos);
printf("%d moeda(s) de R$ 0,10\n",moeda_de_10centavos);
printf("%d moeda(s) de R$ 0,05\n",moeda_de_5centavos);
printf("%d moeda(s) de R$ 0,01\n",moeda_de_1centavo);
    return 0;

}

// Dan Ramos Marques Marangon, RA: 22502303