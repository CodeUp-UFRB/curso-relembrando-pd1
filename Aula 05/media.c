/*Faça um programa que calcule a média de um aluno e utilizando uma struct
 armazenar as variáveis nota1, nota2 e média e agrupe esses dados em um 
 único tipo de dado. Sendo que o programa deve imprimir o nome, idade e número 
 de identificação do aluno, para depois calcular a média.*/

#include<stdio.h>
#include<locale.h>

struct ficha_aluno
{
    float nota1;
	float nota2;
	float media;
};

int main(void){
	setlocale(LC_ALL,"Portuguese_Brazil");
	
	struct ficha_aluno aluno;
	
	printf("Ficha do aluno \n\n");
	
	printf("Nome do aluno: Taise \n");
	printf("Idade do aluno: 19 \n");
	printf("Número de identificação do aluno: 18 \n ");
	
	
	printf("\nDigite a nota 1 do aluno: ");
	scanf("%f", &aluno.nota1);
	
	printf("Digite a nota 2 do aluno: ");
	scanf("%f", &aluno.nota2);
	
	aluno.media= (aluno.nota1+aluno.nota2)/2;
	
	
	printf(" \n Dados do aluno \n\n");
	
	
	printf("Nome do aluno: Taise \n");
	printf("Idade do aluno: 19 \n");
	printf("Número de identificação do aluno: 18 \n ");
	printf("Média : %.2f \n", aluno.media);
	
	return 0;
}
	
