#include<stdio.h>
#include<stdlib.h>
#include<string.h>


int op, pontos, oportunidades;
int palavra1=0,palavra2=0,palavra3=0,palavra4=0;
char s[20];

main(){
       do{
          system("cls");
          printf("1- Jogar\n");
          printf("2- instrucoes\n");
          printf("3- Pontos\n");
          printf("4- Sair\n");
          do{scanf("%d", & op);}while(op<0||op>4);
          switch(op){
                     case 1:
                          oportunidades=4;
                          pontos=0;
                          palavra1=0;palavra2=0;palavra3=0;palavra4=0;
                          do{
                             system("cls");
                             printf("Pontuacao           : %i\n", pontos);
                             printf("tentativas restantes: %i\n", oportunidades);
                             printf("\nt a t u o m b m i k n a k m i b k n g a\n");
                             printf("\nh a j f n p r i m e j m e n y b m i n u\n");
                             printf("\ng h x f s v t e w b y h j r f r d s f u\n");
                             printf("\nl r f i d v h y f d r w f b o j u b m o\n");
                             printf("\nñ j n j m l j l a u t o b u s u n l g b\n");
                             printf("\ni u b e s t a c i o n a m e n t o q u u\n");
                             printf("\nl r f s d v h y f d r w f b h j u b m l\n");
                             printf("\ne o t r e u p r o g r a m a w v k b k j\n");
                             printf("\ni u b d t e s a m s u n g e a w n i i u\n");
                          printf("\n\nPalavra:");
                          scanf("%s", & s);
                          if(strcmp(s, "estacionamento")==0&&palavra1==0){
                                       printf("Palavra encontrada! 5 pontos\n");
                                       pontos=pontos+5;
                                       oportunidades=oportunidades-1;
                                       palavra1=1;
                                       system("pause");
                                       }else if(strcmp(s, "programa")==0&&palavra2==0){
                                             printf("Palavra encontrada! 5 puntos\n");
                                             pontos=pontos+5;
                                             oportunidades=oportunidades-1;
                                             palavra2=1;
                                             system("pause");
                                             }else if(strcmp(s, "samsung")==0&&palavra3==0){
                                                   printf("Palavra encontrada! 5 puntos\n");
                                                   pontos=pontos+5;
                                                   oportunidades=oportunidades-1;
                                                   palavra3=1;
                                                   
                                                   }else if(strcmp(s, "prime")==0&&palavra4==0){
                                                         printf("Palavra encontrada! 5 puntos\n");
                                                         pontos=pontos+5;
                                                         oportunidades=oportunidades-1;
                                                         palavra4=1;
                                                         }else{
                                                               printf("\n\nIncorrecto. Palavra nao encontrada!\n");
                                                               oportunidades=oportunidades-1;
                                                               system("pause");
                                                               }
                                                         }while(oportunidades!=0);
                                                        
                                                         system("cls");
                                                         printf("fim de jogo!\n");
                                                         printf("\nTeus pontos: %i\n", pontos);
                                                         system("pause");
                                                         break;
                     
                     case 2:
                          //Instrucciones
                          system("cls");
                          printf ("instrucoes\n");
                          printf ("\n1. decifre as palavras escondidas entre as letras.");
                          printf ("\n2. escreva as palavra que encontrares, e o programa verificara os acertos e eroos\n.");
                          printf ("\n3. por cada acerto se somarao puntos e por cada erro se tiram os mesmos\n.");
                          printf ("\n4. quando acabarem as entativas , o jogo terminara e teras a tua pontuacao.\n");
                          system("pause");
                          break;
                     case 3:
                          //Pontos
                          system("cls");
                          printf("Pontos\n");
                          if(pontos!=0){
                          printf("A ultima pontuacao gravada foi de  de: %i\n", pontos);
                          printf("Vais a poder super-lo?\n");
                          }else{
                                printf("Nao tens pontuacoes gravadas. joque a partida.\n");
                          system("pause");
                          }
                          break;
                          }
                          }while(op!=4);
                          }
