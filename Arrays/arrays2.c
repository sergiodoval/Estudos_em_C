#include  <stdio.h>
#define MAX 5
 
int main()
{
    int data[MAX], i ,j ,temp;
    int escolha;

	// Inserindo valores
    for (i = 0; i < MAX; i++)
    {
		printf("Insira o numero desejado: ");
        scanf("%d", &data[i]);
    }
    //Demonstrando os valores inseridos.
    printf("Os valores inseridos são:\n");
    for(i=0; i<MAX; i++)
    {
        printf("%d - %d\n", (i+1), data[i]);
    }

    // Organizando valores em ordem crescente.
    for (i = 0; i < MAX; ++i)
    {
        for (j = i + 1; j < MAX; ++j)
        {
            if (data[i] > data[j])
            {
                temp =  data[i];
                data[i] = data[j];
                data[j] = temp;
            }
        }
    }
    
    printf("A ordem crescente dos valores e: \n");
    for (i = 0; i < MAX; ++i)
        printf("%d %d\n",(i+1), data[i]);
        
    return 0;
}