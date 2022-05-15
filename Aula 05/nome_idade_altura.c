/*Faça um programa utilizando uma struct que armazene o nome,
 idade e altura de uma pessoa, e agrupe esses dados em um único 
 tipo de dado.*/



#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(void){
setlocale(LC_ALL,"Portuguese_Brazil");
 struct dados_pessoa
{
	char nome[30];
	int idade;
	float altura;
};

struct dados_pessoa pessoa;

printf("\n Dados pessoa 1 \n \n");

printf("Digite seu nome:");
scanf("%s", &pessoa.nome);

printf("Digite sua idade:");
scanf("%d", &pessoa.idade);

printf("Digite sua altura:");
scanf("%f", &pessoa.altura);

printf(" \n Dados pessoa 1 \n \n");

printf("Nome: %s \n", pessoa.nome);
printf("Idade: %d \n", pessoa.idade);
printf("Altura : %.2f \n", pessoa.altura);



system("Pause");
return 0;

}


