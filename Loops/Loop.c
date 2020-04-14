#include <stdio.h>

int main(void)
{   //Fatorial de 5.
    int resposta = 5*4*3*2*1;

    printf("%d\n", resposta);

    //Exemplo de ciclo (loop).
    //Fatorial de 10.
    int fator = 1;
    int i;

    for(i=2; i<=10; i++)
    {
        fator = fator * i;
    }
   
    printf("a resposta e %d\n", fator);

    return 0;
}