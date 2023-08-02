#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i, x;

	/*printf ("Informe um numero inteiro: \n");
	scanf("%d", &i);
	*/

	x = 0;

	if (i >= -400 && i <= 400)
	{

		while (x = i, x != 0, x++)
		{

			printf("Informe um numero inteiro: \n");
			scanf("%d", &i);

			x = i + 1;
			printf("%d --- %d\n", i, x);
		}
	}
	else
	{

		printf("Numero nao permitido\n");
	}

	return 0;
}
