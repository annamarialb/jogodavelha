#include <stdio.h>
#include <stdlib.h>

/* Fazendo um jogo: o jogo da velha, para o projeto de Técnicas e Desenvolvimento de Algortimos */

int main(int argc, char *argv[]) {
	
	//  estrutura de dados
	int l, c, linha, coluna, jogador = 1;
	char jogo [3][3];
	
	// inicializando a matriz
	for(l=0; l<3; l++){
		for(c=0; c<3; c++){
			jogo[l][c] = ' ';
		}
	}
	
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
	printf("Digite a linha e a coluna que queira jogar: ");
	scanf("%d%d", &linha, &coluna);
	}while(linha<0 || linha>2 || coluna<0 || coluna>2 || jogo[linha][coluna]!=' ');
	
	// salvar coordenadas
	if(jogador==1){
	jogo[linha][coluna]='o'
	jogador++;
	}else{
		jogo[linha][coluna]='x';
		jogador = 1;
	}
	
	// ganhar por linha
	
	// ganhar por coluna
	
	// ganhar na diagonal principal
	
	// ganhar na diagonal secundária
	
	return 0;
}