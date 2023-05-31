#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    
	int dividendo, divisor, quociente, resto;

	setlocale(LC_ALL,"Portuguese");

	printf("Digite o valor do Dividendo: ");
	scanf("%d",&dividendo);
	printf("Digite o valor do Divisor: ");
	scanf("%d",&divisor);
	
	quociente = dividendo / divisor;
	resto = dividendo % divisor;
	
    if (resto==0) {
	    printf("O resultado da divisão é: %d\n",quociente);
	    printf("A divisão é exata\n");
	} else if (resto>=1 && dividendo>divisor) {
        printf("O resultado da divisão é: %d\n",quociente);
        printf("Divisão não exata com resto igual a: %d\n",resto);
    } else if (divisor>dividendo) {
		float resultado = (float) dividendo / (float) divisor;
		printf("O resultado da divisão é: %.3f\n",resultado);
	}
	system("pause");

}
