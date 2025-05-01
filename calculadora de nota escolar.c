#include <stdio.h>
int main(){


double nota1, media,nota2,nota3,nota4,exame;
printf("Digite a primeira nota com ponto: ");
scanf("%lf",&nota1);
printf("Digite a segunda nota: ");
scanf("%lf",&nota2);
printf("Digite a terceira nota: ");
scanf("%lf",&nota3);
printf("Digite a quarta nota: ");
scanf("%lf",&nota4);


media = (((nota1*2) + (nota2*3) + (nota3*4) + (nota4*1))/10);

if (media < 5)
{
    printf("Aluno reprovado\n");
    printf("Media final: %.1lf\n ",media);
}

if (media > 5 && media < 6.99)
{
    printf("Aluno em exame\n");
}

if (media >= 7)
{
    printf("Aluno aprovado\n");
    printf("Media final: %.1lf\n ",media);
}

if (media > 5 && media <6.99)
{
    printf("Nota do exame: ");
    scanf("%lf",&exame);
    media = (media + exame)/2;
printf("Media final: %.1lf\n ",media);
if (media > 5)
{
    printf("Aluno Aprovado.\n");
    printf("Média final: %.1lf\n",media);
}
if (media < 4.99)
{
    printf("Aluno reprovado.\n");
    printf("Média final: %.1lf\n",media);
}

}




return 0;
}

// Dan Ramos Marques Marangon  RA: 22502303 
