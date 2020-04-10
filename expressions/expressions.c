#include <stdio.h>

int main(void)
{
    //Variáveis.
    //Variáveis com apenas letras não são uma boa prática, melhor sempreusar variáveis descritivas.
    int a = 100;
    int b = 2;
    int c = 25;
    int d = 4;
    int result;

    //operações simples.

    printf("Exemplo de operacoes.\n");

    result = a + b;

    printf("a + b = %i.\n", result);

    result = a - b;

    printf("a - b = %i.\n", result);

    result = a * b;

    printf("a * b = %i.\n", result);

    result = a / b;

    printf("a / b = %i.\n", result);

    //Como precedencia funciona. 
    //A leitura é sempre feita da esquerdapara a direita.
    //Soma e subitração tem mesma precedencia.
    //Multiplicação e divisão tem a mesma precedencia, mas são prioridade ante somas e subtrações.
    //Operações entre parenteses passam a ter prioridade.

    printf("Multiplicacao e divisao tem precedencia sobre soma e subtracao.\n");

    result = a + b * b;

    printf("a + b * b = %i.\n", result);

    printf("Operacoes entre parenteses passam a ter precednte.\n");

    result = (a + b) * b;

    printf("(a + b) * b = %i.\n", result);

    //Exemplos de incremento e decremento em variáveis
     int m = 5;
     int n = 10;
     int k;

    printf("Exemplos de incremento e decremento.\n");

     k = m++ + n;

     printf("m++ + n = %i.\n", k);
     printf("valor de m = %i.\n", m);

     k = ++m + n;

     printf("++m + n = %i.\n", k);

     m = 5;

     printf("valor de m = %i.\n", m);

    //exemplo de operações dentro da função printf();

    printf("Exemplo de operacoes dentro de printf.\n");

    printf("a + b - k * c = %i.\n", a + b - k * c);

    return (0);

}