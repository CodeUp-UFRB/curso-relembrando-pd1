
/*Faça um programa que calcule a média aritmética de 
um aluno e diga se foi aprovado ou reprovado, sendo 
que para ser aprovado a média aritmética deve ser maior 
ou igual a 7.*/ 

#include <stdio.h>
#include <stdlib.h>
#include<locale.h>

int main(void){
	setlocale(LC_ALL,"Portuguese_Brazil");
	float nota1, nota2, media;
	
	printf("Digite nota1: \n");
	scanf("%f", &nota1);
	
	printf("Digite nota2: \n");
	scanf("%f", &nota2);
	
	media=(nota1+nota2)/(2);
	
	printf("A média é : %.2f \n", media);
	
	if(media>=7){
		printf("Aluno aprovado!\n");
	}
	
	else{
		printf("Aluno reprovado!\n");
	}
		
	
	
	system("Pause");
	return 0;
}

