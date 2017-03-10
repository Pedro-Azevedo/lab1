#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define E 2.71828
float my_func(float);

/* Definir função que queremos calcular */

float my_func(float y)
{
    float parc1, parc2, res;
    parc1 = pow(E,-y);
    parc2 = sin(4.0*y);
    res = parc1*parc2;
    return res;
}

int main(void)
{
    float y1=0.04f, y2=1.2f, y3=1.9f, y4=2.8f, y5=3.5f;
    printf("Aplicando a função a:\n");
    printf("y1=%.2f -----> f(y1)=%f\n", y1, my_func(y1));
    printf("y2=%.2f -----> f(y2)=%f\n", y2, my_func(y2));
    printf("y3=%.2f -----> f(y3)=%f\n", y3, my_func(y3));
    printf("y4=%.2f -----> f(y4)=%f\n", y4, my_func(y4));
    printf("y5=%.2f -----> f(y5)=%f\n", y5, my_func(y5));
    return EXIT_SUCCESS;
}
