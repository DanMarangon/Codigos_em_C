#include <stdio.h>
int main(){

int X,Y;

do
{
scanf("%d %d",&X,&Y);
    if (X > 0 && Y > 0)
    {
        printf("primeiro\n");
    }
       else if (X > 0 && Y < 0)
    {
        printf("quarto\n");
    }
       else if (X < 0 && Y < 0)
    {
        printf("terceiro\n");
    }
       else if (X < 0 && Y > 0)
    {
        printf("segundo\n");
    }
    

} while (X != 0 && Y != 0);






return 0;
}

// Dan Ramos Marques Marangon RA: 22502303
