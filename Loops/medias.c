#include <stdio.h>

int main(void)
{
    int i, numberOfNums = 0, total = 0, value;
    float average;

    printf("quantos numeros devem ser lidos? ");

    scanf("%d", &numberOfNums);

    for(i = 0; i < numberOfNums; i++)
    {
        scanf("%d", &value);

        total += value; //total += value é a mesma coisaque total = total + value.

        printf("lido %d\n", value);
    }

    average = (float)total / numberOfNums;

    printf("Voce leu %d valores, a media dos valores lidos e: %f", numberOfNums, average);

    return (0); //Tentar não esquecer de colocar o zero entre parenteses.
}
