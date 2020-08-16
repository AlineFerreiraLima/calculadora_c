#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int numeroa;
	int numerob;
	int operacao;
	int resultado;
	
	
	printf("\nDigite o primeiro numero:_");
	scanf("%d", &numeroa);
	
	fflush(stdin);
	
	printf("\nDigite a operacao desejada ex: 1-mais, 2-subtracao, 3-divisao, 4-multiplicar:_");
	scanf("%d", &operacao);
	
	printf("\nDigite o segundo numero:_");
	scanf("%d", &numerob);	
	
	if (operacao == 1){
		resultado=numeroa+numerob;
	}else {
		if (operacao == 2){
			resultado=numeroa-numerob;
		}else {
			if (operacao == 3){
				resultado=numeroa/numerob;
			}else {
				if (operacao == 4){
					resultado=numeroa*numerob;
				}
			}
		}
	}
	
	printf("\nResultado da operacao: %d", resultado);
	
	
	return 0;
}
