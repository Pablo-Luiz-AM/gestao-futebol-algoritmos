#include <stdio.h>

// Incluindo Biblioteca Matematica
#include <math.h>

int main(){
	
// Variáveis de Ambiente

	int idade, golsC, golsM, partidasT, minutos, horas, minutosR, vitorias, empates, derrotas, pontos;
	float mediaG, salario1, salario2, diferenca;
	char nome[20], time[20], nomeJS1[20], nomeJS2[20];

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
printf("Digite a quantidade de partidas realizadas pelo jogador na temporada atual: ");
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

// Entrada de Dados - Nome do (Time)
printf("Digite o nome do Time: ");
scanf("%s", &time);

// Entrada de Dados - Quantidade de (Vitorias) na Temporada
printf("\nDigite a quantidade de vitorias do %s na temporada atual: ", time);
scanf("%d", &vitorias);

// Entrada de Dados - Quantidade de (Empate) na Temporada
printf("\nDigite a quantidade de empates do %s na temporada atual: ", time);
scanf("%d", &empates);

// Entrada de Dados - Quantidade de (Derrotas) na Temporada
printf("\nDigite a quantidade de derrotas do %s na temporada atual: ", time);
scanf("%d", &derrotas);

// Processamento - Calculando o aproveitamento do time
// Calcula o número total de pontos da temporada por meio do número total de vitórias, empates e derrotas na temporada

// Processamento - Regras
// Vitoria = 3 - Pontos
// Empate = 1 - Ponto
// Derrota = 0 - Pontos

pontos = (vitorias * 3) + empates;

// Saída de Dados - Calculando o aproveitamento do time
printf("\n============================================= Resultado ==============================================\n");
printf("Somando todos o dados de Vitorias, Empates e Derrotas o Time do %s acumulou serca de:", time);
// Saída de Dados - Nome do (Time)
printf("\n\n============ %s ===========\n", time);
// Saída de Dados - (Vitorias) do Time
printf("Vitorias: %d", vitorias);
// Saída de Dados - (Empates) do Time
printf("\nEmpates: %d", empates);
// Saída de Dados - (Derrotas) do Time
printf("\nDerrotas: %d", derrotas);
// Saída de Dados - (Total de Pontos) do Time
printf("\nTotal de Pontos: %d", pontos);
printf("\n================================\n\n");
// Saída de Dados - (Aproveitamento do Time)
printf("=======================================================================================================\n");
printf("O Time do %s teve o aproveitamento de: %d - Pontos na Temporada", time, pontos);
printf("\n=======================================================================================================");	



// Calculando a diferença de salários entre jogadores
printf("\n----------------------------------------------------------------------------");
printf("\n------------------------- Diferenca de Salarial ----------------------------");
printf("\n----------------------------------------------------------------------------\n");

// Entrada de Dados - (Diferença de Salarial)

// Entrada de Dados - Nome do (Jogador 1)
printf("Digite o nome do jogador 1: ");
scanf("%s", &nomeJS1);

// Entrada de Dados - Salario do (Jogador 1)
printf("\nDigite o valor Salarial de %s: ", nomeJS1);
scanf("%f", &salario1);

// Entrada de Dados - Nome do (Jogador 2)
printf("\nDigite o nome do jogador 2: ");
scanf("%s", &nomeJS2);

// Entrada de Dados - Salario do (Jogador 2)
printf("\nDigite o valor Salarial de %s: ", nomeJS2);
scanf("%f", &salario2);


// Processamento - Calculando a diferença de salários entre jogadores
// Calculando a diferença salarial entre dois jogadores do mesmo time

diferenca = fabs(salario1 -salario2);

// Saída de Dados - Calculando a diferença de salários entre jogadores
printf("\n============================================= Diferenca ==============================================\n");
// Saída de Dados - (Diferença de Salarial)
printf("A diferenca salarial entre %s e %s e de: %.2fR$", nomeJS1, nomeJS2, diferenca);
printf("\n\n============ Salarios ===========\n");
// Saída de Dados - Nome e Salario do (Jogador 1)
printf("Salario do %s: %.2fR$", nomeJS1, salario1);
// Saída de Dados - Nome e Salario do (Jogador 2)
printf("\nSalario do %s: %.2fR$", nomeJS2, salario2);
// Saída de Dados - (Diferença de Salarial)
printf("\nDiferenca Salarial: %.2fR$", diferenca);
printf("\n================================\n\n");
printf("=======================================================================================================\n");

return 0;	
}
