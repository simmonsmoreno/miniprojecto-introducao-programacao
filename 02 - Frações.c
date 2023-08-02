#include <stdlib.h>
#include <math.h>
#include <stdio.h>

int gcd(int u, int v)
{
	int t;
	while (u > 0)
	{

		if (v > u)
		{
			t = u;
			u = v;
			v = t;
		}
		u -= v;
	}
	return v;
}

struct fracao
{
	int n, m;
};

struct fracao reduce(const struct fracao val)
{
	struct fracao result;
	int ratio = gcd(val.n, val.m);

	result.n = val.n / (float)ratio;
	result.m = val.m / (float)ratio;

	return result;
}

int main()
{

	int n, m;

	printf("Prima '0' para sair do programa\n\n");
	printf("Introduza o numerador >> ");
	scanf("%d", &n);

	if (n != 0)
	{
		printf("Introduza o denominador >> ");
		scanf("%d", &m);
		printf("\n\n");

		if (n >= 0 && n <= 10000 && m >= 1 && m <= 10000)
		{

			struct fracao val;
			val.n = n;
			val.m = m;

			val = reduce(val);

			printf("%d/%d >> %d/%d\n\n", n, m, val.n, val.m);
		}
		else
		{

			printf("Numerador ou denominador invalidos");
		}
		return 0;
	}

	printf("Escolheste a opcao sair\n");
	printf("Prima qualquer tecla para confirmar\n\n");
}
