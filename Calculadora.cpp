#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <math.h>
#include <Windows.h.>

int adicao(int a, int b){
	int resultado;
	resultado = a + b;
	return resultado;
}

int subtracao(int c, int d){
	int resultado2;
	resultado2 = c - d;
	return resultado2;
}

float multiplicacao(float e, float f){
	float resultado3;
	resultado3 = e * f;
	return resultado3;
}

float divisao(float g, float h){
	float resultado4;
	resultado4 = g / h;
	return resultado4;
}

float raiz(float i){
	float resultado5;
	resultado5 = sqrt(i);
	return resultado5;
}

int main(){
	setlocale(LC_ALL, "Portuguese"); //Permite o uso de acentua��o e caracteres especiais no printf
	//Contextualiza��o e Menu
	printf("\n\n");
	printf("\t _______________________________\n");
	printf("\t|\t\t\t\t|");
	printf("\n\t| Bem-vind@ a calculadora em C \t|\n");
	printf("\t|\t\t\t\t|\n");
	printf("\n -> MENU");
	printf("\n\n |0| - Sair da aplica��o!\n |1| - Adi��o\n |2| - Subtra��o\n |3| - Multiplica��o\n |4| - Divis�o\n |5| - Raiz\n");
	int aux;
	do{
		printf("\n[*] Qual opera��o voc� deseja realizar? ");
		scanf("%d", &aux);
		switch(aux){
			case 0:
				system("cls");
				printf("\nObrigada por utilizar a aplica��o!");
				break;
			case 1:
			{
				system("cls");
				printf("\t� ADI��O �\n");
				int num1, num2;
				printf("�� Informe o primeiro n�mero: ");
				scanf("%d", &num1);
				printf("�� Informe o segundo n�mero: ");
				scanf("%d", &num2);
				int r = adicao(num1, num2);
				printf("   RESULTADO: [%d + %d] = |%d|", num1, num2, r);
				break;
			}
			case 2:
			{
				system("cls");
				printf("\t� SUBTRA��O �\n");
				int num1, num2;
				printf("�� Informe o primeiro n�mero: ");
				scanf("%d", &num1);
				printf("�� Informe o segundo n�mero: ");
				scanf("%d", &num2);
				int r = subtracao(num1, num2);
				printf("   RESULTADO: [%d - %d] = |%d|", num1, num2, r);
				break;	
			}	
			case 3:
			{
				system("cls");
				printf("\t� MULTIPLICA��O �\n");
				float num1, num2;
				printf("�� Informe o primeiro n�mero: ");
				scanf("%f", &num1);
				printf("�� Informe o segundo n�mero: ");
				scanf("%f", &num2);
				
				float r = multiplicacao(num1, num2);
				printf("   RESULTADO: [%.2f x %.2f] = |%.2f|", num1, num2, r);
				break;		
			}	
			case 4:
			{
				system("cls");
				printf("\t� DIVIS�O �\n");
				float num1, num2;
				printf("�� Informe o primeiro n�mero: ");
				scanf("%f", &num1);
				printf("�� Informe o segundo n�mero: ");
				scanf("%f", &num2);
				
				float r = divisao(num1, num2);
				printf("   RESULTADO: [%.2f / %.2f] = |%.2f|", num1, num2, r);
			}
				break;
			case 5:
			{
				system("cls");
				printf("\t� RAIZ �\n");
				float num1;
				printf("�� Informe o n�mero: ");
				scanf("%f", &num1);
				float r = raiz(num1);
				printf("A raiz de [%.2f] �: |%.2f|", num1, r);
				break;
			}
			default:
				printf("Essa opera��o n�o est� dispon�vel!");
				break;			
		}
		if(aux != 0){
			Sleep(2500);
			system("cls");
			printf("\n\n -> MENU");
			printf("\n\n |0| - Sair da aplica��o!\n |1| - Adi��o\n |2| - Subtra��o\n |3| - Multiplica��o\n |4| - Divis�o\n |5| - Raiz\n");
		}		
	}while(aux != 0);
}

