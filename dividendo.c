#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    /* D = Dividendo, d = Divisor, q = Quociente, r = Resto */
	int dividendo, divisor, quociente, resto;

	setlocale(LC_ALL,"Portuguese");
	printf("Digite o valor do Dividendo: ");
	scanf("%d",&dividendo);
	printf("Digite o valor do Divisor: ");
	scanf("%d",&divisor);
	quociente = dividendo / divisor;
	resto = dividendo % divisor;
    if (resto==0 && dividendo>divisor)
	{
	    printf("O resultado da divisão é: %d\n",quociente);
	    printf("A divisão é exata\n");
	}
	else if (resto>=1 && dividendo>divisor)
    {
        printf("O resultado da divisão é: %d\n",quociente);
        printf("Divisão não exata com resto igual a: %d\n",resto);
    }
    else if (divisor>dividendo) /* As variáveis teriam que ser do tipo float para ser feito uma operação em que o divisor é maior que o dividendo */
    {
    	printf("Operação inválida\a\n");
	}
	system("pause");
}
