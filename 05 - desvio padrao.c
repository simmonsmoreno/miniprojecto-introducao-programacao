#include <stdio.h>
#include <math.h>

int main(void)
{

    float vetor[100], medias = 0, soma, media = 0, desvio, vari;
    int n, i = 0;

    printf("\nDigite um numero:");
    scanf("%d", &n);

    if (n <= 100)
    {

        for (i = 1; i <= n; i++)
        {
            printf("\nDigite um numero:");
            scanf("%f", &vetor[i]);
            medias = medias + vetor[i];
            media = medias / n;
        }

        for (i = 1; i <= n; i++)
        {
            soma = soma + ((vetor[i] - media) * (vetor[i] - media));
        }
        vari = soma / n;
        desvio = sqrt(vari);

        printf("\n\n Media do conjunto = %.2f\n", media);
        printf("\n\n Desvio padrao =  %.2f\n\n", desvio);

        return 0;
    }
}
