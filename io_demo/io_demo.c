//Incluir a biblioteca padrão std.
#include <stdio.h>

//função principal, inicia o programa em c.
//Void significa que a função não passa argumentos.
int main (void)
{
    //Exemplo de getchar().
    //%c = caracter, %d = interger, %f = float, %5.2f = cinco casas antes do ponto e duas depois.
    //printf é a função para imprimir informação no console.
    printf("Minhas iniciais sao: %c%c%c e minha idade e %d.\n", 'S', 'D', 'V', 42);

    //Return retorna um valor para o interger da função principal.
    return(0);
}