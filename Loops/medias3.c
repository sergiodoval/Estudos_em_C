#include <stdio.h>

int main(void)
{
    int i, numberOfNums = 0, total = 0, valsRead, value;
    float average;

    valsRead = scanf("%d", &value);

    while(valsRead > 0)
    {
        if(value < 0)
        {
            valsRead = scanf("%d", &value);

            continue;
        }
        
        numberOfNums++;
        
        total += value; //total += value é a mesma coisa que total = total + value.

        printf("lido %d\n", value);

        valsRead = scanf("%d", &value);

        //para sair do loop no cmd do windows, pressione esc, depois q (quit) e aperte enter.
    }

    average = (float)total / numberOfNums;

    printf("Voce leu %d valores, a media dos valores lidos e: %f", numberOfNums, average);

    return (0); //Tentar não esquecer de colocar o zero entre parenteses.
}