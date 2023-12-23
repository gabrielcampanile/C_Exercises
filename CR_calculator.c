#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    int i, n, cred=0;
    float nota, peso, CR = 0;
    char UC[30];

    printf("N de materias: ");
    scanf("%i", &n);

    for (i = 0; i < n; i++)
    {
        printf("UC: ");
        scanf("%s", UC);
        printf("Conceito: ");
        scanf("%f", &nota);
        printf("Creditos: ");
        scanf("%f\n", &peso);

        CR += nota * peso;
        cred += peso;
    }

    CR /= cred;

    printf("\nCoef. Rendimento: %.3f\n", CR);

    return 0;
}