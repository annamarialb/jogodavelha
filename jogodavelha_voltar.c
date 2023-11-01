#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Fazendo um jogo: o jogo da velha, para o projeto de Técnicas e Desenvolvimento de Algortimos */

void menu (int *numero);
void limparBufferEntrada(void);

int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL, "portuguese");
	
	// estrutura de dados
	int l, c, linha, coluna, jogador, ganhou, jogadas, opcao, numero = 0;
	char jogo [3][3], voltar;
	
	// menu do jogo
	do{
		
		menu(&numero);
		

	switch(numero){
		case 1:{
		do{
			jogador = 1;
			ganhou = 0;
			jogadas = 0;
			// inicializando a matriz
			for(l=0; l<3; l++){
				for(c=0; c<3; c++){
					jogo[l][c] = ' ';
				}
			}
			
			do{
				// imprimir o jogo
				printf("\n\n\t 0   1   2\n\n");
				for(l=0; l<3; l++){
					for(c=0; c<3; c++){
						if(c==0){
							printf("\t");
						}
						printf(" %c ", jogo[l][c]);
						if(c<2){
							printf("|");
						}
						if(c==2){
							printf("  %d", l);
						}
					}
					if(l<2){
						printf("\n\t-----------");
					}
					printf("\n");
					
				}
				
				// ler cordenadas
				do{
					printf("\n JOGADOR 1 = o\nJOGADOR 2 = x\n");
					printf("\nJOGADOR %d: Digite o n�mero da linha e da coluna que queira jogar (com espa�amento entre os n�meros): ", jogador);
					scanf("%d%d", &linha, &coluna);
				}while(linha<0 || linha>2 || coluna<0 || coluna>2 || jogo[linha][coluna]!=' ');
				
				// salvar coordenadas
				if(jogador==1){
					jogo[linha][coluna]='o';
					jogador++;
				}else{
					jogo[linha][coluna]='x';
					jogador = 1;
				}
				jogadas++;
				
				// ganhar por linha
				if(jogo[0][0] == 'o' && jogo[0][1] == 'o' && jogo[0][2] == 'o' ||
				   jogo[1][0] == 'o' && jogo[1][1] == 'o' && jogo[1][2] == 'o' ||
				   jogo[2][0] == 'o' && jogo[2][1] == 'o' && jogo[2][2] == 'o'){
				   	printf("\nO jogador 1 venceu!\n");
				   	ganhou = 1;
				}
				
				if(jogo[0][0] == 'x' && jogo[0][1] == 'x' && jogo[0][2] == 'x' ||
				   jogo[1][0] == 'x' && jogo[1][1] == 'x' && jogo[1][2] == 'x' ||
				   jogo[2][0] == 'x' && jogo[2][1] == 'x' && jogo[2][2] == 'x'){
				   	printf("\nO jogador 2 venceu!\n");
				   	ganhou = 1;
				}
				
				// ganhar por coluna
				if(jogo[0][0] == 'o' && jogo[1][0] == 'o' && jogo[2][0] == 'o' ||
				   jogo[0][1] == 'o' && jogo[1][1] == 'o' && jogo[2][1] == 'o' ||
				   jogo[0][2] == 'o' && jogo[1][2] == 'o' && jogo[2][2] == 'o'){
					printf("\nO jogador 1 venceu!\n");
					ganhou = 1;	
				}
				
				if(jogo[0][0] == 'x' && jogo[1][0] == 'x' && jogo[2][0] == 'x' ||
				   jogo[0][1] == 'x' && jogo[1][1] == 'x' && jogo[2][1] == 'x' ||
				   jogo[0][2] == 'x' && jogo[1][2] == 'x' && jogo[2][2] == 'x'){
					printf("\nO jogador 2 venceu!\n");
					ganhou = 1;   	
				}
				
				// ganhar na diagonal principal
				if(jogo[0][0] == 'o' && jogo[1][1] == 'o' && jogo[2][2] == 'o'){
					printf("\nO jogador 1 venceu!\n"); 
					ganhou = 1;
				}
				if(jogo[0][0] == 'x' && jogo[1][1] == 'x' && jogo[2][2] == 'x'){
					printf("\nO jogador 2 venceu!\n"); 
					ganhou = 1;
				}
				
				// ganhar na diagonal secundária
				if(jogo[0][2] == 'o' && jogo[1][1] == 'o' && jogo[2][0] == 'o'){
					printf("\nO jogador 1 venceu!\n");
					ganhou = 1;
				}
				if(jogo[0][2] == 'x' && jogo[1][1] == 'x' && jogo[2][0] == 'x'){
					printf("\nO jogador 2 venceu!\n");
					ganhou = 1;
				}
			}while(ganhou == 0 && jogadas < 9);
			
			if(ganhou == 0){
				printf("\nO jogo finalizou sem ganhador!\n");
			}
			printf("\nDigite 1 para jogar novamente: \n");
			scanf("%d", &opcao);
	  	}while(opcao == 1);
	  	
	  	printf("\n Deseja retornar ao menu?\n ");
			printf("\n 'S' - Sim \n");
			printf("\n 'N' - N�o \n");
			printf(" \n Digite a op��o desejada: \n");
			while ((getchar()) != '\n');
			scanf("% c", &voltar);
			limparBufferEntrada(); 
			
			if(voltar== 'S' || voltar == 's'){
				menu(&numero);
			}else {
				printf("Ok");
			}
			
	  	break;
	  	}
	  	
	  	case 2:{
	  		printf("okay");
		break;
		}
		
		case 3:{
			printf("\n\tDesenvolvido por Anna Maria, Maria Eduarda e Milena Azevedo\n");
			printf("\n\tAlunos do UNIPE - Ciencia da Computacao\n");
			printf("\n\tTurma: Tecnicas e Desenvolvimento de Algoritmos - 1B 2023.2 \n");
			
			printf("\n Deseja retornar ao menu?\n ");
			printf("\n 'S' - Sim \n");
			printf("\n 'N' - N�o \n");
			printf("\n Digite a op��o desejada: \n ");
		
			scanf(" %c", &voltar);
			limparBufferEntrada(); 
			
			if(voltar== 'S' || voltar =='s'){
				menu(&numero);
			}else {
				numero= 4;
			}
			
		break;
		}
		
		case 4:{
			printf("Saindo...");
		break;
		}
   }
   
	} while(numero != 4);	
	
		
	return 0;
}

void menu (int *numero){
	printf("\n\tJOGO DA VELHA\n\n");
	printf("1 - JOGAR\n");
	printf("2 - VER RANKING\n");
	printf("3 - CREDITOS\n");
	printf("4 - SAIR\n\n");
	printf("Digite a opcao desejada: ");
	scanf("%d", numero);
	
	}
	
void limparBufferEntrada() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF) { }
}


