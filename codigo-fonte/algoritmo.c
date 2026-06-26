#include <stdio.h>

int main(){
	
// Variáveis de Ambiente

	int idade, golsC;
	char nome[20];

// Apresentação do Jogador

// Entrada de Dados - Apresentação do Jogador
printf("------------------------------------------------------------------");
printf("\n--------------- Apresentação do Jogador -----------------");
printf("\n------------------------------------------------------------------");

// Entrada de Dados - (Nome) do jogador
printf("\nDigite o nome do jogador: ");
scanf("%s", &nome);

// Entrada de Dados - (Idade) do jogador
printf("\nDigite a idade do jogador: ");
scanf("%d", &idade);

// Entrada de Dados - (Quantidade de Gols na Carreira) do jogador
printf("\nDigite a quantos gols o jogador fez em sua carreira: ");
scanf("%d", &golsC);

printf("\n------------------------------------------------------------------");

// Saída de Dados - Apresentação do Jogador
printf("\n========== Dados do Jogador ==========\n");
// Saída de Dados - (Nome) do jogador
printf("Nome: %s \n", nome);

// Saída de Dados - (Idade) do jogador
printf("Idade: %d \n", idade);

// Saída de Dados - (Quantidade de Gols na Carreira) do jogador
printf("Gols: %d \n", golsC);

printf("======================================");

return 0;	
}
