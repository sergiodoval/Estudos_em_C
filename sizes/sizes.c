#include <stdio.h>

int main(void)
{
    //variáveis
    //Double é um float com o dobro de tamanho de um float normal. usualmente os compiladores tratam float como se fossem doubles. 
    int i;
    double d;
    char c;

    //Unsigned long informa de um tipo de variavel indefinida, sizeof pede o tamanho de uma variável. 
    printf("O tamanho de um interger nessa maquina e: %lu.\n", (unsigned long)sizeof(i));
    printf("O tamanho de um double nessa maquina e: %lu.\n", (unsigned long)sizeof(d));
    printf("O tamanho de um double nessa maquina e: %lu.\n", (unsigned long)sizeof(c));

    return(0);

}