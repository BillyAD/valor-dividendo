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
	    printf("O resultado da divis�o �: %d\n",q);
	    printf("A divis�o � exata\n");
	}
	else if (r>=1 && D>d)
    {
        printf("O resultado da divis�o �: %d\n",q);
        printf("Divis�o n�o exata com resto igual a: %d\n",r);
    }
    else if (d>D) /* As vari�veis teriam que ser do tipo float para ser feito uma opera��o em que o divisor � maior que o dividendo */
    {
    	printf("Opera��o inv�lida\a\n");
	}
	system("pause");
}

