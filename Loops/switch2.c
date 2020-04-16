#include <stdio.h>

int main(void){

    char mov;

    printf("insira uma das seguintes letras: w, s, a ou d\n");

    scanf("%c", &mov);

     switch (mov){
         case 'w':
         printf("cima");
         break;
         case 's':
         printf("baixo");
        break;
        case 'a':
         printf("esquerda");
         break;
         case 'd':
         printf("direita");
        break;
     }
    return (0);
}