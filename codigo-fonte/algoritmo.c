#include <stdio.h>

int main(){
	
// Variáveis de Ambiente

	int idade, golsC, golsM, partidasT, minutos, horas, minutosR, vitorias, empates, derrotas, pontos;
	float mediaG;
	char nome[20], nomeT[20];

// Apresentação do Jogador

// Entrada de Dados - Apresentação do Jogador
printf("----------------------------------------------------------------------------");
printf("\n----------------------- Apresentacao do Jogador --------------------------");
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
printf("\n----------------------- Media de gols por partida --------------------------");
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
printf("\n==================================================================");

// Conversão de minutos para tempo de jogo
printf("\n----------------------------------------------------------------------------");
printf("\n----------------------------- Tempo de Jogo --------------------------------");
printf("\n----------------------------------------------------------------------------\n");

// Entrada de Dados - (Tempo de Jogo)
// Entrada de Dados - Minutos Jogados em Campo na Temporada
printf("Digite a quantidade de minutos jogados na temporada: ");
scanf("%d", &minutos);

// Processamento - Conversão de minutos para tempo de jogo
// Calcula o tempo jogado a partir de uma base em minutos, e depois converte esse valor para horas e minutos
horas = minutos / 60;
minutosR = minutos % 60;
if(horas > 1){
// Saída de Dados - Conversão de minutos para tempo de jogo
// Saída de Dados - (Tempo de Jogo)
printf("\n=================== Resultado =====================\n");
printf("%s jogou %d horas e %d minutos na temporada", nome, horas, minutosR);
printf("\n===================================================");
} else{
// Saída de Dados - Conversão de minutos para tempo de jogo
// Saída de Dados - (Tempo de Jogo)
printf("\n=================== Resultado ====================\n");
printf("%s jogou %d hora e %d minutos na temporada", nome, horas, minutosR);
printf("\n==================================================");	
};


// Calculando o aproveitamento do time
printf("\n----------------------------------------------------------------------------");
printf("\n------------------------- Aproveitamento do Time ---------------------------");
printf("\n----------------------------------------------------------------------------\n");

// Entrada de Dados - (Aproveitamento do Time)
// Entrada de Dados - Nome do Time
printf("Digite o nome do Time: ");
scanf("%s", &nomeT);

// Entrada de Dados - Quantidade de Vitorias na Temporada
printf("\nDigite a quantidade de vitorias do %s na temporada atual: ", nomeT);
scanf("%d", &vitorias);

// Entrada de Dados - Quantidade de Empate na Temporada
printf("\nDigite a quantidade de empates do %s na temporada atual: ", nomeT);
scanf("%d", &empates);

// Entrada de Dados - Quantidade de Derrotas na Temporada
printf("\nDigite a quantidade de derrotas do %s na temporada atual: ", nomeT);
scanf("%d", &derrotas);

// Processamento - Calculando o aproveitamento do time
// Calcula o número total de pontos da temporada por meio do número total de vitórias, empates e derrotas na temporada

// Processamento - Regras
// Vitoria = 3 - Pontos
// Empate = 1 - Ponto
// Derrota = 0 - Pontos

pontos = (vitorias * 3) + empates;

// Saída de Dados - Calculando o aproveitamento do time
// Saída de Dados - (Aproveitamento do Time)
printf("\n============================================= Resultado ==============================================\n");
printf("Somando todos o dados de Vitorias, Empates e Derrotas o Time do %s acumulou serca de:", nomeT);
printf("\n\n============ %s ===========\n", nomeT);
printf("Vitorias: %d", vitorias);
printf("\nEmpates: %d", empates);
printf("\nDerrotas: %d", derrotas);
printf("\nTotal de Pontos: %d", pontos);
printf("\n================================\n\n");
printf("=======================================================================================================\n");
printf("O Time do %s teve o aproveitamento de: %d - Pontos na Temporada", nomeT, pontos);
printf("\n=======================================================================================================");	

return 0;	
}
