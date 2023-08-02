/*
**Curso:Engenheria Informatica e de Computadores
**/

#include <stdio.h>
#include <math.h>
#include <string.h>

//declaracao de funcoes
void sucessoes();
void casais();
void histograma();
void campeonato();
void dna();

main(){
	
	int opcao;
	
	do{
		system("cls"); //limpar a tela
		printf("|===========================================|\n");
		printf("|               Mini-Projeto                |\n");
		printf("|===========================================|\n");
	 	printf("|1 - Sucessoes                              |\n");
	 	printf("|2 - Problema dos casais                    |\n");
	 	printf("|3 - Histograma                             |\n");
	 	printf("|4 - Campeonato de Futebol                  |\n");
	 	printf("|5 - Sequencia de DNA                       |\n");
	 	printf("|6 - Sair                                   |\n");
	 	printf("|===========================================|\n");
	 	
	 	printf("Escolha uma opcao > "); scanf("%d", &opcao); //ler a opcao escolhida
	 	system("cls"); 	//limpar a tela
	 	
	 	switch(opcao){
	 		case 1:
	 			sucessoes(); 
	 			break;
			case 2:
				casais();
				break;
			case 3:
				histograma();
				break;
			case 4:
				campeonato();
				break;
			case 5: 
				dna();
				break;
			case 6:
				printf("A sair do programa...\n");
				break;
			default:
				printf("Escolha uma opcao valida!\n");
				system("pause");
		 }
	}while(opcao!=6);//opcao para sair do programa = 6;
}

void sucessoes(){
	
	int n, an, i, soma=0, numero;
	char c;
		
	do{
		system("cls");
		printf("============================================\n");
		printf("                 Sucessoes                 |\n");
		printf("============================================\n");
		printf("Digite um numero inteiro e positivo >> ");
		scanf("%d", &n);
		
		//se n e par
		if(n%2==0){
			for(i=1; i<=n; i++){
				an = i*i;
				printf("%do termo = %d\n", i, an);
				soma += an; //soma = soma + an; calcular soma dos n termos
			}
		//se n e impar
		}else{
			for(i=1; i<=n; i++){
				an = 3*i + 1;
				printf("%do termo = %d\n", i, an);
				soma += an; //soma = soma + an; calcular soma dos n termos
			}
		}
		
		printf("A soma dos n termos da sucessao = %d\n\n\n", soma);
		
		printf("Introduza um numero para verificar se faz parte da sucessao >> "); 
		scanf("%d", &numero);
		
		if(n%2==0){
			for(i=1; i<=numero; i++){
				an = i*i;
				if(an == numero){
					printf("Numero %d e termo da sucessao!", numero);
					break;
				}else if(i==numero){
					printf("Numero %d nao e termo da sucessao!", numero);
				}
			}
		}else{
			for(i=1; i<=numero; i++){
				an = 3*i + 1;
				if(an == numero){
					printf("Numero %d e termo da sucessao!", numero);
					break;
				}else if(i==numero){
					printf("Numero %d nao e termo da sucessao!", numero);
				}
			}
		}
		
		system("pause");
		system("cls");
		printf("============================================\n");
		printf("                 Sucessoes                 |\n");
		printf("============================================\n");
		printf("Continuar a calcular sucessoes?\n");
		printf("Prima 'n' para sair ou qualquer coisa para continuar>> ");
		getchar(); //limpar buffer da memoria
		c=getchar(); //scanf("%c",&c);	
	}while(c!='n');
	
	
	
}

void casais(){
		
	int vetor[500], par=0, n, impar=0, i;
	
	printf("|===========================================|\n");
	printf("|           Problema dos Casais            |\n");
	printf("|===========================================|\n");
	
	printf("Quantas pessoas estao? >> ");
	scanf("%d", &n);
	
	if(n>0 && n<=1000){
		for(i=1; i<=n; i++){
			printf("Digite um numero inteiro e positivo: ");
			scanf("%d", &vetor[i]);
			if(vetor[i] % 2 ==0 ){
				par++;
			}else{
				impar++;
			}
		}
		printf("Estao %d homen e %d mulher aqui\n", impar, par);
		
		if(par%impar == 0){
			printf("Existe proporcao um-por-um");
		}else{
			printf("Nao existe proporcao um-por-um");
		}
		
	}else{
		printf("Numero invalido!\n");
	}
	
	system("pause");
	
}

void histograma(){
	
	float vetor[100], medias=0, soma, media=0, desvio, vari;
    int  n, i=0;
	
	printf("|===========================================|\n");
	printf("|                 Desvio Padrao             |\n");
	printf("|===========================================|\n");
	
   	printf("Digite a quantidade de numeros: ");
    scanf("%d", &n);

    
    for(i=1; i<=n; i++){
    	
        printf("Digite um numero: ");
		scanf("%f", &vetor[i]);
        soma += vetor[i];
	}

	media = soma/n;
	
    for(i=1;i<=n;i++){
    	
        soma = soma+((vetor[i]-media)*(vetor[i]-media));
	}
    
	vari=soma/n;
    desvio=sqrt(vari);

    printf("\n\n Media do conjunto = %.2f\n", media);
    printf("\n\n Desvio padrao =  %.2f\n\n", desvio);
    
	system("pause");
}

void campeonato(){
	
	int tabela[100], n, i, casa=0, fora=0, vitorias=0, empates=0, derrotas=0;
	tabela[0]=0;
	
	printf("============================================\n");
	printf("                  Campeonato               |\n");
	printf("============================================\n");
	
	printf("Digite o numero do time: ");
	 scanf("%d", &n);
	
	for(i=1; i<=n; i++){
		printf("%o jogo do time 1. Introduza os golos marcados: \n",i);
		printf("Time 1 >> ");
		scanf("%d", &casa);
		printf("Time %d >> ", (i+1));
		scanf("%d", &fora);
		printf("Resultado: Time 1 (%d x %d) Time %d\n", casa, fora, (i+1));
		system("pause");
		system("cls");
		tabela[i] = casa-fora;
		
		if(tabela[i] > 0){
			tabela[0] += 3;
			vitorias++;
		}else if(tabela[i] == 0){
			tabela[0] += 1;
			empates++;
		}else{
			tabela[0] += 0;
			derrotas++;
		}
	}
	printf("Resultado da temporada time 1:\n");
	printf("Pontos >> %d\n", tabela[0]);
	printf("Vitorias >> %d\n", vitorias);
	printf("Empates >> %d\n", empates);
	printf("Derrotas >> %d\n", derrotas);
	
	
	system("pause");
	
}

void dna(){
	
	char string[100],a='A',c='C',t='T',g='G';
	int i, j, n;
	
	printf("============================================\n");
	printf("                    DNA                    |\n");
	printf("============================================\n");
	
	printf("Digite uma sequencia de string:");
	scanf("%s",&string);
	n = strlen(string); //n = tamanho do string digitado
	
	printf("Numeros de letras inseridas:%d \n",n);
	
	//verificar se existe letra que nao faz parte do dna
	for(i=0;i<n;i++){
		
		if(string[i]!='a' && string[i]!='c' && string[i]!='t' && string[i]!='g'){
		   printf("(%c) nao faz parte da sequencia de DNA!\n", string[i]);
		}
	}
	
 	//verificar se somente A ou C estao nas posicoes pares
	for(j=0;j<n;j+=2){
		if(string[j]=='a' || string[j]=='c'){
			if((string[j]=='a' && string[j+1]=='t')||(string[j]=='c' && string[j+1]=='g')){
				
			}else{
				printf("ERRO!!! Depois de (%c) nao deve ficar a letra (%c)\n",string[j], string[j+1]);
			}
		}else{
			printf("(%c) esta em posicao par onde so eh permitido (A) ou (C)\n", string[j]);
		}
	}
	
	system("pause");
}
