/*Fa�a um programa que some dois inteiros e utilizando 
o conector AND, se soma>2 e soma<10, subtraia primeiro 
inteiro por 1, caso a condi��o seja falsa apenas exiba 
o resultado da soma.*/

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(void){
	setlocale(LC_ALL,"Portuguese_Brazil");
	int a, b, soma, sub;
	
	printf("Digite um n�mero a:\n");
	scanf("%d", &a);
	
	printf("Digite um n�mero b:\n");
	scanf("%d", &b);
	
	soma = a+b;
	
	if((soma>2) && (soma<10)){
		sub = a - 1;
		printf("\nComo soma menor que 10, subtrai��o a-1 \n");
		
		printf("A subtra��o � igual a %d: \n", sub);
	}
	else{
		printf("A soma � igual a %d: \n", soma);
	}
	return 0;
	
	}
