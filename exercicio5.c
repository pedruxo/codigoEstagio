#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *inverter(char *string)
{
    int tam = strlen(string);
    char *inversa = (char *)malloc((tam + 1) * sizeof(char));

    if (inversa == NULL)
    {
        printf("Erro na alocação de memória.\n");
        exit(1);
    }

    for (int i = 0; i < tam; i++)
    {
        inversa[i] = string[tam - 1 - i];
    }
    inversa[tam] = '\0';

    return inversa;
}

int main()
{
    char string[101];

    printf("Digite uma frase/palavra (Limite de 100 caracteres): ");

    if (fgets(string, sizeof(string), stdin) != NULL)
    {
        string[strcspn(string, "\n")] = '\0';
    }

    char *result = inverter(string);

    if (result != NULL)
    {
        printf("String invertida: %s\n", result);
        free(result);
    }

    return 0;
}