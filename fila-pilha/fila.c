#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

	setlocale(LC_ALL,"Porguese");
	
	#define tamanho 10

	int menu = 10;
	int sair;

	struct tfila {
		int dados[tamanho];
		int inicio;
		int fim; 
	};

	struct tfila fila;

	/* Listar valores da fila */
	void fila_conteudo() {
		printf("[");
		for (int i = 0; i < tamanho; i++) {
			printf("%d ", fila.dados[i]);
		}
		printf("]");
	}

	/* Entrada de valores na fila */
	void fila_entrada() {
		int entrada;
		printf("Digite quantos valores serão inseridos na fila: ");
		scanf("%d", &entrada);
		fflush(stdin);
		if (entrada == 0) {
			printf("Número inválido");
		} else {
			for (int i = 0; i < entrada; i++) {
				if (fila.fim == tamanho) {

					printf("A fila está cheia\n");
					return 0;
				} else {
					printf("Digite um valor para entrar na fila: ");
					scanf("%d",&fila.dados[fila.fim]);
					fflush(stdin);
					fila.fim++;
				}
			}
		}
	}

	/* Saída de valores na fila */
	void fila_retirar() {
		if (fila.inicio == fila.fim) {
			printf("A fila está vazia\n");
		} else {
			for (int i = 0; i < tamanho; i++) {
				fila.dados[i] = fila.dados[i+1];
			}
			fila.dados[fila.fim-1] = 0;
			fila.fim--;
		}
	}

	while (sair != 0) {

		printf("\n0 - Sair\n1 - Entrada Fila\n2 - Saída Fila\n3 - Visualizar Fila\n");
		scanf("%d", &menu);

		switch (menu) 
		{
		case 3:
			fila_conteudo();
			break;
		
		case 2:
			fila_retirar();
			break;

		case 1:
			fila_entrada();
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
