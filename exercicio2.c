#include <stdio.h>

int fibonacci(int n)
{
    int x = 0, y = 1, z = 0;

    if (n == 0 || n == 1)
    {
        return 1;
    }

    while (z < n)
    {
        z = x + y;
        x = y;
        y = z;
    }

    return (z == n);
}

int main()
{
    int n;

    printf("Digite um número: ");
    scanf("%d", &n);

    if (fibonacci(n))
    {
        printf("%d pertence à sequência de Fibonacci.\n", n);
    }
    else
    {
        printf("%d não pertence à sequência de Fibonacci.\n", n);
    }

    return 0;
}