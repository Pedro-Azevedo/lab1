#include<stdio.h>
#include <stdlib.h>
/* a biblioteca math.h não é usada */

int main(void)
{
	float nota;
	int teste; /* Para testar se estamos a inserir um numero*/
	printf("Por favor introduza a nota:\n");
	teste= scanf("%f", &nota);
	if(teste!=1 || nota<0.00f) /*Testamos se foi inserido um numero e se esse numero é não negativo*/
		printf("Erro: Insira um número não negativo válido\n");
	else
	{
	/* põe-se f à frente dos números para os atribuir como float e não double (afeta a precisão nas notaslimite
    ( se se tentar imprimir 3.50 pode imprimir B+ e não A-*/
    /* em vez de if nas condições seguintes pomos else if (apenas executa se a primeira for falsa). Alias por causa disso só
     temos de colocar uma condição (a de >=) pois p.ex. no primeiro if já se testa que a nota não é maior do que 4 pelo que
     no segundo já não tem que se testar se ela é menor ou igual a 4 (se passou do primeiro if é porque é)*/
		if (nota>4.00f)
			printf("Nota: A+");
		else if (nota>=3.85f)
			printf("Nota: A");
		else if (nota>=3.50f)
			printf("Nota: A-");
		else if (nota>=3.15f)
			printf("Nota: B+");
		else if (nota>=2.85f)
			printf("Nota: B");
		else if (nota>=2.50f)
			printf("Nota: B-");
		else if (nota>=2.15f)
			printf("Nota: C+");
		else if (nota>=1.85f)
			printf("Nota: C");
		else if (nota>=1.50f)
			printf("Nota: C-");
		else if (nota>=1.15f)
			printf("Nota: D+");
		else if (nota>=0.50f)
			printf("Nota: D");
		else
			printf("Nota: F");
	}
	return EXIT_SUCCESS;
}
