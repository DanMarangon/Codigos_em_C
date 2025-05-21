#include <stdio.h>

int main(){

int senha;



do
{
    printf("Digite a senha: \n");
    scanf("%d",&senha);

     if (senha == 2002)
    {
        printf("-----------------------------------------------\n");
        printf("Acesso Permitido\n");
        printf("-----------------------------------------------\n");
    }
    else{
        printf("-----------------------------------------------\n");
        printf("Senha Invalida\n");
        printf("-----------------------------------------------\n");
    }
    
} while (senha != 2002);










return 0;
}
