#include <stdio.h>

int main(void)
{
    int i, numdnum = 0, total, vallido, valor;
    float media;

    vallido = scanf("%d", &valor); 

    while(valor > 0)
    {
        if(valor < 0)
        {
            vallido = scanf("%d", &valor);
            continue;
        };

        numdnum++;
        total += valor; // += é equivalente a total = total + valor
        
        printf("lidos %d\n", valor);
        
        vallido = scanf("%d", &valor);
    } 

    media = (float)total / numdnum;

    printf("voce leu %d valores, media = %f\n", numdnum, media);
    return (0); //Tentar não esquecer de colocar o zero entre parenteses.
}

