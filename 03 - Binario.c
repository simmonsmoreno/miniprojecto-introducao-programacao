#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main (){
	
	int dec1=0,dec2=0,num1, num2, d=1, e=1, op, soma, sub, mult, div;
	char s[10], t[10], u[10], v[10];
	
	printf("Que operacao desejas realizar ?");
	printf("\n\n");
	printf("(1) Soma\n");
	printf("(2) subtracao\n");
	printf("(3) multiplicao\n");
	printf("(4) divisao\n");
	
	printf("\n\n");
	printf("Operacao >> "); scanf("%d", &op );
	printf("\n\n");	
	
	
	printf("Digite dois numeros binario a operar >> \n");
	scanf("%d %d", &num1, &num2);


do{
		dec1= dec1+ (num1%10)*d;
		d=d*2;
		num1= num1/10;
		
		dec2= dec2+ (num2%10)*e;
		e=e*2;
		num2= num2/10;
		
	}while (num1!=0 && num2!=0);

	
if(dec1>=0&&dec1<255&&dec2>=0&&dec2<255){
	

 switch (op){
		
		case 1:
		 
		soma=dec1+dec2;
		
		itoa (soma, s, 2);
		
		printf("Resultado >> %s", s);
	
			break;
		
		case 2: 
		
		sub=dec1-dec2;
	
		itoa (sub, t, 2);
		
		printf("Resultado >> %s", t);
	
			break;
			
		
		case 3: 
		
		mult=dec1*dec2;
	
		itoa (mult, v, 2);
		
		printf("Resultado >> %s", v);
	
			break;
		
		case 4: 
		
		div=dec1/dec2;
	
		itoa (div, u, 2);
		
		printf("Resultado >> %s", t);
	
			break;
		
		default:
			printf("operacao introduzido e invalido");
			break;
			
	}
}else{
	printf("numeros introduzidos sao invalidos");
}
	
	
	
	
	return 0;
}
