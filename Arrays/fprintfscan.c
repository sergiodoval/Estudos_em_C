#include <stdio.h>
#define MAX 5

int main(void)
{
    int data[MAX], i ,j ,temp;
    FILE *fp;

    //Tentativa de abrir arquivo externo.
    fp = fopen("C:/dev/Estudos_em_C/Arrays/arquivo.md", "r");
    if (fp == NULL)
    {
        printf("Nao foi possivel abrir o arquivo.\n");
        return(0);
    }
    
    // Inserindo valores
    for (i = 0; i < MAX; i++)
    {
		//printf("Insira o numero desejado: ");
        fscanf(fp, "%d", &data[i]);
    }

    fclose(fp);

    for(i=0; i<MAX; i++)
    {
        printf("%d\n", data[i]);
    }

    fp = fopen("C:/dev/Estudos_em_C/Arrays/arquivo2.md", "w");
    if (fp == NULL)
    {
        printf("Nao foi possivel abrir o arquivo.\n");
        return(0);
    }
    
    fprintf(fp, "Varredura do arquivo completa arquivo.");

    fclose(fp);
    return (0);


}
