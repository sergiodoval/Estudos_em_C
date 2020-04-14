#include <stdio.h>

int main(void)
{
    int i, numdnum = 0, total, valor;
    float media;

    printf("Quantos numeros devem ser lidos?");

    scanf("%d", &numdnum);

    for(i=0; i<numdnum; i++)
    {
        scanf("%d", &valor);
        total += valor; // += é equivalente a total = total + valor
        printf("lidos %d", valor);
    } 

    media = (float)total / numdnum;

    printf("voce leu %d valores\n media = %f", numdnum, media);
    return (0); //Tentar não esquecer de colocar o zero entre parenteses.
}

