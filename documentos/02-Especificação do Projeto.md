# Especificação do Projeto

## Perfis de Usuários


<table>
<tbody>
<tr align=center>
<th colspan="2">Analista Esportivo</th>
</tr>
<tr>
<td width="150px"><b>Descrição</b></td>
<td width="600px">
Profissional que precisa otimizar a avaliação de atletas e automatizar os cálculos de desempenho da equipe. </td>

</tr>
<tr>
<td><b>Necessidades</b></td>
<td>
  
1. Identificar o tipo de métrica esportiva (dados de jogador, estatísticas do time ou ocupação de público);

2. Média de Gols por Partida;

3. Calculando o Aproveitamento de um Time;

4. Conversão de Minutos para Tempo de Jogo;

5. Verificação de Cartão Vermelho.</td>
</tr>
</tbody>
</table>


## Histórias de Usuários

|EU COMO... `QUEM`   | QUERO/PRECISO ... `O QUE` |PARA ... `PORQUE`                 |
|--------------------|---------------------------|----------------------------------|
| Analista Esportivo | Cadastrar os dados iniciais do jogador (nome, idade e gols) | Exibir o perfil do atleta na tela rapidamente |
| Analista Esportivo | Calcular a média de gols por partida  | Saber o nível de eficiência e pontaria do atacante  |
| Analista Esportivo | Converter o tempo jogado em minutos para horas e minutos | Controlar a minutagem e o desgaste físico dos atletas |
| Analista Esportivo | Informar as vitórias, empates e derrotas do time | Calcular a pontuação total e o aproveitamento no campeonato  |
| Analista Esportivo | Comparar o salário de dois jogadores | Identificar a diferença na folha salarial do elenco |
| Analista Esportivo | Verificar a quantidade de cartões amarelos aplicados | Saber se o jogador atingiu o limite e receberá o cartão vermelho (expulsão)|
| Analista Esportivo | Consultar a idade do jogador para a categoria Sub-20| Triar de forma automatizada quem vai para a base e quem vai para o profissional |
| Analista Esportivo | Avaliar o desempenho por gols na temporada | Gerar alertas de performance como "Excelente", "Boa" ou "Abaixo do esperado" |
| Analista Esportivo | Classificar o jogador cruzando idade e gols | Identificar se ele é um "Jovem talento promissor" ou um "Jogador experiente" |
| Analista Esportivo | Calcular a taxa de ocupação do estádio com base no público presente | Medir o engajamento da torcida e classificar o nível do público na partida |



## Requisitos do Projeto


### Requisitos Funcionais

|ID    | Descrição                | Prioridade |
|-------|---------------------------------|----|
| RF-01 |O sistema deve permitir a inserção de dados dosjogadores com nome, idade e gols na carreira| Alta | 
| RF-02 |O sistema deve calcular e exibir a média exata de gols por partida| Alta |
| RF-03 |O sistema deve converter minutos jogados no formato padrão de horas e minutos| Alta |
| RF-04 |O sistema deve calcular a pontuação de equipes na regra: Vitória (3pts), Empate (1pt) e Derrota (0pts)| Alta |
| RF-05 |O sistema deve realizar o cálculo de diferença salarial entre dois atletas selecionados| Alta |
| RF-06 |O sistema deve emitir um alerta de expulsão caso o jogador atinja 2 cartões amarelos| Alta |
| RF-07 |O sistema deve realizar a triagem automática de categorias do atleta com base nos limites de idade (Sub-20 vs Profissional)| Alta |
| RF-08 |O sistema deve avaliar a temporada do jogador em níveis de desempenho com base nas metas de gols batidas| Alta |
| RF-09 |O sistema deve cruzar idade e gols para emitir rótulos de potencial do atleta (Talento promissor, experiente, etc.)| Média |
| RF-10 |O sistema deve calcular a porcentagem de ocupação de público com base na capacidade máxima informada do estádio| Média |
| RF-11 |O sistema deve emitir relatórios comparativos de desempenho gerados em formato de tabela na tela| Baixa |


### Requisitos não Funcionais

|ID        | Descrição                                                                                                                             |Prioridade |
|----------|----------------------------------------------------------------------------------------------------------------------------------------------|----|
|  RNF-01  |  O sistema deve realizar os cálculos matemáticos e condicionais instantaneamente (tempo de resposta inferior a 1 segundo).                | Média | 
|  RNF-02  |  A aplicação deve possuir interface simples, minimalista e focada em dados legíveis                                                       | Baixa |
|  RNF-03  |  O código deve ser modularizado e versionado no GitHub para facilitar futuras implementações de novos cálculos esportivos.                | Alta  | 