#include <stdio.h>
#include <locale.h>
#include <stdlib.h> //uso do system
#include <math.h>
#include <Windows.h.> //uso do sleep

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
	setlocale(LC_ALL, "Portuguese"); //Permite o uso de acentuação e caracteres especiais no printf
	//Contextualização e Menu
	printf("\n\n");
	printf("\t _______________________________\n");
	printf("\t|\t\t\t\t|");
	printf("\n\t| Bem-vind@ a calculadora em C \t|\n");
	printf("\t|\t\t\t\t|\n");
	printf("\n -> MENU");
	printf("\n\n |0| - Sair da aplicação!\n |1| - Adição\n |2| - Subtração\n |3| - Multiplicação\n |4| - Divisão\n |5| - Raiz\n");
	int aux;
	do{
		printf("\n[*] Qual operação você deseja realizar? ");
		scanf("%d", &aux);
		switch(aux){
			case 0:
				system("cls");
				printf("\nObrigado por utilizar a aplicação!");
				break;
			case 1:
			{
				system("cls");
				printf("\t§ ADIÇÃO §\n");
				int num1, num2;
				printf("¨¨ Informe o primeiro número: ");
				scanf("%d", &num1);
				printf("¨¨ Informe o segundo número: ");
				scanf("%d", &num2);
				int r = adicao(num1, num2);
				printf("   RESULTADO: [%d + %d] = |%d|", num1, num2, r);
				break;
			}
			case 2:
			{
				system("cls");
				printf("\t§ SUBTRAÇÃO §\n");
				int num1, num2;
				printf("¨¨ Informe o primeiro número: ");
				scanf("%d", &num1);
				printf("¨¨ Informe o segundo número: ");
				scanf("%d", &num2);
				int r = subtracao(num1, num2);
				printf("   RESULTADO: [%d - %d] = |%d|", num1, num2, r);
				break;	
			}	
			case 3:
			{
				system("cls");
				printf("\t§ MULTIPLICAÇÃO §\n");
				float num1, num2;
				printf("¨¨ Informe o primeiro número: ");
				scanf("%f", &num1);
				printf("¨¨ Informe o segundo número: ");
				scanf("%f", &num2);
				
				float r = multiplicacao(num1, num2);
				printf("   RESULTADO: [%.2f x %.2f] = |%.2f|", num1, num2, r);
				break;		
			}	
			case 4:
			{
				char escolha;
				system("cls");
				printf("\t§ DIVISÃO §\n");
				int num1, num2;
				printf("¨¨ Informe o primeiro número: ");
				scanf("%d", &num1);
				printf("¨¨ Informe o segundo número: ");
				scanf("%d", &num2);
				
				float r = divisao(num1, num2);
				int resto;
				resto = (num1 % num2);
				fflush(stdin);
				printf("\n   RESULTADO: [%d / %d] = |%.2f|", num1, num2, r);
				printf("\n   Deseja saber o resto(S/N)? ");
				scanf("%c", &escolha);
				fflush(stdin);
				if(escolha == 'S' || escolha == 's'){
					printf("   RESTO: %d", resto);
				}
			}
				break;
			case 5:
			{
				system("cls");
				printf("\t§ RAIZ §\n");
				float num1;
				printf("¨¨ Informe o número: ");
				scanf("%f", &num1);
				float r = raiz(num1);
				printf("A raiz de [%.2f] é: |%.2f|", num1, r);
				break;
			}
			default:
				printf("Essa operação não está disponível!");
				break;			
		}
		if(aux != 0){ // o menu estava aparecendo quando pressionado 0, por isso acrescentei o if
			Sleep(2500); //tempo de espera entre o resultado e o Menu com a tela limpa
			system("cls");
			printf("\n\n -> MENU"); //usuario irá esquecer a qual operação se refere cada numero - por isso a repetição do menu
			printf("\n\n |0| - Sair da aplicação!\n |1| - Adição\n |2| - Subtração\n |3| - Multiplicação\n |4| - Divisão\n |5| - Raiz\n");
		}		
	}while(aux != 0);
}
