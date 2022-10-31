#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    /* D = Dividendo, d = Divisor, q = Quociente, r = Resto */
	int D, d, q, r;

	setlocale(LC_ALL,"Portuguese");
	printf("Digite o valor do Dividendo: ");
	scanf("%d",&D);
	printf("Digite o valor do Divisor: ");
	scanf("%d",&d);
	q = D / d;
	r = D % d;
    if (r==0 && D>d)
	{
	    printf("O resultado da divisão é: %d\n",q);
	    printf("A divisão é exata\n");
	}
	else if (r>=1 && D>d)
    {
        printf("O resultado da divisão é: %d\n",q);
        printf("Divisão não exata com resto igual a: %d\n",r);
    }
    else if (d>D) /* As variáveis teriam que ser do tipo float para ser feito uma operação em que o divisor é maior que o dividendo */
    {
    	printf("Operação inválida\a\n");
	}
	system("pause");
}

