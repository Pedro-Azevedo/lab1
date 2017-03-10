#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
	float x,y,z,r;
	float A,V;
	float xtest, ytest, ztest, dist;
	int ver1, ver2, ver3; /* para verificar os scanfs*/


	printf("Introduza as coordenadas (x,y,z) do centro da esfera:\n");
	ver1=scanf("%f %f %f", &x,&y,&z); /* a partir do primeiro scanf temos de dar um espaço para limpar o buffer do teclado
	(se não o programa crasha)*/

	if(ver1!=3)
		printf("Erro: as coordenadas inseridas não são válidas\n");

	else
	{
		printf("Introduza o módulo do raio da esfera (cm):");
		ver2=scanf(" %f", &r);
		if(ver2!=1 || r<0)
			printf("Erro: Insira um número não negativo para o raio\n");

		else
		{

			V=(4.0/3.0)*M_PI*r*r*r;
			A = 4.0*M_PI*r*r;
			/* A biblioteca matemática já tem um valor para o pi definido M_PI */
			printf("O volume da esfera é de %.3f cm³ e a sua área é de %.3f cm²!\n", V,A); /*imprimir resultado com 3 c.d.*/

			printf("Indique agora um ponto do espaço R³ (x,y,z):\n");
			ver3=scanf(" %f %f %f", &xtest, &ytest, &ztest);

			if(ver3!=3)
				printf("Erro: as coordenadas inseridas não são válidas\n");
			else
			{
 				dist = sqrt((pow(xtest-x,2))+(pow(ytest-y,2))+(pow(ztest-z,2)));
				if (dist > r)
					printf("O ponto localiza-se fora da esfera.");
				else if (dist < r)
					printf("O ponto localiza-se dentro da esfera");
				else
					printf("O ponto localiza-se na superfície esférica");
			}
		}
	}

	return EXIT_SUCCESS;
}
