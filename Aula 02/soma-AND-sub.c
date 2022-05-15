/*Faça um programa que some dois inteiros e utilizando 
o conector AND, se soma>2 e soma<10, subtraia primeiro 
inteiro por 1, caso a condição seja falsa apenas exiba 
o resultado da soma.*/

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(void){
	setlocale(LC_ALL,"Portuguese_Brazil");
	int a, b, soma, sub;
	
	printf("Digite um número a:\n");
	scanf("%d", &a);
	
	printf("Digite um número b:\n");
	scanf("%d", &b);
	
	soma = a+b;
	
	if((soma>2) && (soma<10)){
		sub = a - 1;
		printf("\nComo soma menor que 10, subtraição a-1 \n");
		
		printf("A subtração é igual a %d: \n", sub);
	}
	else{
		printf("A soma é igual a %d: \n", soma);
	}
	return 0;
	
	}
