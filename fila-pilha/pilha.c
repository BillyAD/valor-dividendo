#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

	setlocale(LC_ALL,"Porguese");
	
	#define tamanho 10 

	struct tpilha {
		int dados[tamanho];
		int inicio;
		int fim; 
	};

	struct tpilha pilha;

	/* Listar valores empilhados */
	void pilha_conteudo() {
		int i;
		printf("[");
		for (int i = 0; i < tamanho; i++) {
			printf("%d, ", pilha.dados[i]);
		}
		printf("]");
	}

	/* Entrada de valores a serem empilhados */
	void pilha_entrada() {
		if (pilha.fim == tamanho) {
			printf("A pilha está cheia\n");
			return 0;
		} else {
			printf("Digite um valor para ser empilhado: ");
			scanf("%d",&pilha.dados[pilha.fim]);
			fflush(stdin);
			pilha.fim++;
		}
	}




	for (int i = 0; i < 10; i++) {
		pilha_entrada();
	}
	pilha_entrada();
			
	return 0;
}
