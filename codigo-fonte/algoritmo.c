#include <stdio.h>

int main(){
	
// Variáveis de Ambiente

	int idade, golsC, golsM, partidasT;
	float mediaG;
	char nome[20];

// Apresentação do Jogador

// Entrada de Dados - Apresentação do Jogador
printf("----------------------------------------------------------------------------");
printf("\n---------------------- Apresentacao do Jogador ------------------------");
printf("\n----------------------------------------------------------------------------");

// Entrada de Dados - (Nome) do jogador
printf("\nDigite o nome do jogador: ");
scanf("%s", &nome);

// Entrada de Dados - (Idade) do jogador
printf("\nDigite a idade do jogador: ");
scanf("%d", &idade);

// Entrada de Dados - (Quantidade de Gols na Carreira) do jogador
printf("\nDigite a quantos gols o jogador fez em sua carreira: ");
scanf("%d", &golsC);

printf("\n----------------------------------------------------------------------------");

// Saída de Dados - Apresentação do Jogador
printf("\n========== Dados do Jogador ==========\n");
// Saída de Dados - (Nome) do jogador
printf("Nome: %s \n", nome);

// Saída de Dados - (Idade) do jogador
printf("Idade: %d \n", idade);

// Saída de Dados - (Quantidade de Gols na Carreira) do jogador
printf("Gols: %d \n", golsC);

printf("======================================");

// Verificar se um Jogador Pode Jogar
printf("\n----------------------------------------------------------------------------");
printf("\n-------------------------- Verificacao de idade ----------------------------");
printf("\n----------------------------------------------------------------------------\n");

// Processamento - Verificação se o jogador pode jogar
// Se o jogador possuir 20 anos de idade ou menos, ele deverá jogar na categoria Sub-20; se não, ele deverá jogar na categoria profissional
if(idade <= 20){
	// Saída de Dados - O jogador devera jogar na categoria (Sub-20)
	printf("%s devera jogar na categoria Sub-20, pois possui %d anos de idade", nome, idade);
} else{
	// Saída de Dados - O jogador devera jogar na categoria (Profissional)
	printf("%s devera jogar na categoria Profissional, pois possui %d anos de idade", nome, idade);
};

// Média de gols por partida

// Entrada de Dados - Média de gols por partida
printf("\n----------------------------------------------------------------------------");
printf("\n---------------------- Media de gols por partida ------------------------");
printf("\n----------------------------------------------------------------------------\n");

// Entrada de Dados - (Gols marcados pelo jogador na temporada atual)
printf("Digite a quantidade de gols marcados pelo jogador na temporada atual: ");
scanf("%d", &golsM);

// Entrada de Dados - (Gols marcados pelo jogador na temporada atual)
printf("Digite a quantidade de partidas realizadas pelo jogador na temporada atual:");
scanf("%d", &partidasT);

// Processamento de Dados - Média de gols por partida
// Calculando a média de gols por partida do jogador
// A média de gols por partida do jogador se resume na divisão de seu número de gols na temporada atual pelo seu número de partidas na temporada atual

mediaG = (float) golsM / partidasT;

// Saída de Dados - Média de gols por partida
// Saída de Dados - Média
printf("\n======================= Media de gols ============================\n");
printf("%s tem uma media de (%.2f) Gols por partida na temporada atual", nome, mediaG);
printf("\n==================================================================\n");

return 0;	
}
