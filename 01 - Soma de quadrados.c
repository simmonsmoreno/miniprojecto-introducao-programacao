#include <stdlib.h>
#include <math.h>
#include <stdio.h>



int main(){
	
	int a, n, d, i, sq, qs, q;
	
	printf("Digite um numero >> ");
	scanf("%d", &n);
	
		//soma de quadrado;
	
			sq= (n*(n+1)*((2*n)+1))/6;
	
		//quadrado de soma;
	
			for(i=1;i<=n;i++){
			q=q+i;
			qs=pow(q,2);
			
			printf("%d\n", q);		
			}
			
			
		//diferença de soma dos quadrados e quadrados da soma
			
			d=qs-sq;
		
		//system ("cls");
		
		
		
		printf("Numero introduzido >> %d \n\n",n );
		printf("Soma de quadrado >> %d \n",sq );
		printf("Quadrado da soma >> %d \n\n", qs );
		printf("Diferenca de soma do quadrado e quadrado da soma >> %d \n\n",d );
		
	
		
return 0;

}
