#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    char *nome;
    double faturamento;
} Estado;

int main()
{
    Estado *estados = (Estado *)malloc(5 * sizeof(Estado));

    if (estados == NULL)
    {
        printf("Erro de alocação de memória.\n");
        return 1;
    }

    estados[0] = (Estado){"SP", 67836.43};
    estados[1] = (Estado){"RJ", 36678.66};
    estados[2] = (Estado){"MG", 29229.88};
    estados[3] = (Estado){"ES", 27165.48};
    estados[4] = (Estado){"Outros", 19849.53};

    double total = 0;

    for (int i = 0; i < 5; i++)
    {
        total += estados[i].faturamento;
    }

    printf("Percentual de faturamento por estado:\n");

    for (int i = 0; i < 5; i++)
    {
        double percentual = (estados[i].faturamento / total) * 100;
        printf("%s: %.2f%%\n", estados[i].nome, percentual);
    }

    free(estados);

    return 0;
}