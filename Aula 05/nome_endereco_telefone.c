/*Faça um programa utilizando struct que armazene  o nome, 
telefone e endereço de uma pessoa, e agrupe esses dados
em um único tipo de dado.*/

#include<stdio.h>
#include<locale.h>

int main(void){
	setlocale(LC_ALL,"Portuguese_Brazil");
	
	struct dados_cadastro{
		char nome[20];
		int telefone;
		char endereco[50];
	};
	
	struct dados_cadastro c;
	
	printf("Digite seu nome:");
	scanf("%s", &c.nome);
	
	printf("Digite seu telefone:");
	scanf("%d", &c.telefone);
	
	printf("Digite seu endereço:");
	scanf("%s", &c.endereco);
	
	
	printf("\n Dados cadastro \n\n");
	
	printf("Nome %s \n", c.nome);
	printf("Telefone %d \n", c.telefone);
	printf("Endereço %s \n", c.endereco);
	
	system("pause");
	return 0;

}
