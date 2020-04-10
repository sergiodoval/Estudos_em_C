//Incluir a biblioteca padrão std.
#include <stdio.h>

//função principal, inicia o programa em c.
//Void significa que a função não passa argumentos.
int main (void)
{
    //Variaveis do programa. int = interger e char = caracter.
    char I1, I2, I3;
    int idade;
    
    //printf é a função para imprimir informação no console.
    printf("Insira as suas inicias e depois quantos anos tem.\n");
    
    //Exemplo de putchar();
    //scanf é a função para inserir a partir do console. 
    scanf("%c %c %c %d", &I1, &I2, &I3, &idade);
   
    //Exemplo de getchar();
    //%c = caracter, %d = interger, %f = float, %5.2f = cinco casas antes do ponto e duas depois.
    printf("Minhas iniciais sao: %c %c %c e tenho %d.\n", I1, I2, I3, idade);

    //Return retorna um valor para o interger da função principal.
    return(0);
}