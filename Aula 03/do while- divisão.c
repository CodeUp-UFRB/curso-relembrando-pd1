/*Fa�a um programa que efetue a divis�o de dois n�meros, 
sendo que o segundo n�mero n�o pode ser igual  a zero, caso
o usu�rio digite o valor zero, o programa deve pedir para 
digitar o segundo n�mero at� que seja diferente de zero.*/

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(void){
	setlocale(LC_ALL,"Portuguese_Brazil");
	float a, b, div;
	
			
	printf("Digite um valor para a: \n");
	scanf("%f", &a);
	
	do{
		printf("Digite um valor para b: \n");
    	scanf("%f", &b);
    	
	}while(b==0);
	
	div=a/b;
	
	printf("O resultado � %.2f: \n", div);
	
	system("pause");
	return 0;
}
