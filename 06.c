#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
	int ano,resto;
	int teste; /*para testar o scanf*/
	printf("Introduza o ano:\n");
	teste=scanf("%d", &ano);
	if(teste!=1 || ano<0) /*testar se o foi inserido um número ou se o número inserido é não negativo */
		printf("Erro: Insira para o ano um número não negativo\n");

	else
	{
		resto = ano%400;
		if (resto == 0)
			printf("É um ano bissexto (com 366 dias).");
		else
		{
			//não sendo divisivel por 400
			resto = ano%100;
			if (resto == 0)
				printf("Não é um ano bissexto (tem 365 dias).");
			else
			{
				//não sendo divisivel por 400 nem por 100
				resto = ano%4;
				if (resto == 0)
					printf("É um ano bissexto (com 366 dias).");
				else
					//não sendo divisivel por 400 nem 100 nem 4
					printf("Não é um ano bissexto (tem 365 dias).");
			}
		}
	}
	return EXIT_SUCCESS;
}
