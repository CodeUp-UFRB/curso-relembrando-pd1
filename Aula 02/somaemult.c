//Fa�a um programa que some 2 n�meros inteiros e em seguida multiplique por um outro n�mero do tipo inteiro.

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>


int main(void){
	setlocale(LC_ALL,"Portuguese_Brazil");
	int a, b, c, E;
	
	printf("Digite valor de a:\n ");
	scanf("%d", &a);
	
	printf("Digite o valor de b:\n ");	
	scanf("%d", &b);
	
	printf("Digite o valor de c:\n ");	
	scanf("%d", &c);
	
	E = (a+b)*c;
	
	printf("O resultado � %d \n", E);
	
	
	system("Pause");
	return 0;
}
