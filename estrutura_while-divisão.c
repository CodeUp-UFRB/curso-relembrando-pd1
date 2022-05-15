/*Faça um programa que efetue a divisão de dois números, 
sendo que o segundo número não pode ser igual  a zero, caso
o usuário digite o valor zero, o programa deve pedir para 
digitar o segundo número até que seja diferente de zero.*/

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(void){
	setlocale(LC_ALL,"Portuguese_Brazil");
	float a, b, div;
	

	printf("Digite um valor para a: \n");
	scanf("%f", &a);
	printf("Digite um valor para b: \n");
	scanf("%f", &b);
	
	while(b==0){
		printf("Digite um valor para b: \n");
	    scanf("%f", &b);
	}
	div=a/b;
	printf("O resultado é %.2f: \n", div);
	
	system("pause");
	return 0;
}
