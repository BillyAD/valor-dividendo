#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

	setlocale(LC_ALL,"Porguese");
	
	#define tamanho 10

	int menu = 10;
	int sair;

	struct tpilha {
		int dados[tamanho];
		int inicio;
		int fim; 
	};

	struct tpilha pilha;

	/* Listar valores empilhados */
	void pilha_conteudo() {
		printf("[");
		for (int i = 0; i < tamanho; i++) {
			printf("%d ", pilha.dados[i]);
		}
		printf("]");
	}

	/* Entrada de valores a serem empilhados */
	void pilha_entrada() {
		int entrada;
		printf("Digite quantos valores serão inseridos na pilha: ");
		scanf("%d", &entrada);
		fflush(stdin);
		if (entrada == 0) {
			printf("Número inválido");
		} else {
			for (int i = 0; i < entrada; i++) {
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
		}
	}

	/* Saída de valores empilhados */
	void pilha_retirar() {
		if (pilha.inicio == pilha.fim) {
			printf("A pilha está vazia\n");
		} else {
			pilha.dados[pilha.fim-1] = 0;
			pilha.fim--;
		}
	}

	while (sair != 0) {

		printf("\n0 - Sair\n1 - Empilhar\n2 - Desempilhar\n3 - Visualizar Pilha\n");
		scanf("%d", &menu);

		switch (menu) 
		{
		case 3:
			pilha_conteudo();
			break;
		
		case 2:
			pilha_retirar();
			break;

		case 1:
			pilha_entrada();
			break;

		case 0:
			return 0;
			break;
		
		default:
			break;
		}

	}
		
	return 0;
}
