#include <stdio.h>
#include <stdlib.h>

int main (void)
{
    long int x, y;
    int teste; /*variável para teste do scanf */
    printf("Introduza os dois valores a comparar: ");
    teste = scanf("%li %li", &x, &y);
    if(teste!=2)
    {
        printf("Erro: introduza números válidos\n");
    }
    else
    {
        if (x>y)
            printf("%li", x);
        else if (x<y) /*como já se usou o if antes opta-se pelo else if*/
            printf("%li", y);
        else if (x==y)
            printf("Os valores introduzidos são iguais.");
    }
    return EXIT_SUCCESS;
}
