#include <stdio.h>

int main(void){

    int mov;

    printf("insira um dos seguintes numeros: 1 ou 2\n");

    scanf("%d", &mov);

     switch (mov){
         case 1:
         printf("cima");
         break;
         case 2:
         printf("baixo");
        break;
     }
    return (0);
}