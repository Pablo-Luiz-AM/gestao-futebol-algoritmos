# Metodologia

Esta seção descreve a organização da equipe para a execução das tarefas de desenvolvimento do Sistema de Gestao de Futebol - Algoritmos e as ferramentas utilizadas para a manutenção dos códigos e demais artefatos.


## Gerenciamento de Projeto
A metodologia ágil escolhida para o desenvolvimento deste projeto foi o SCRUM. Esta escolha justifica-se pela necessidade de entregas incrementais, visto que um sistema de agenda demanda funcionalidades críticas (como CRUD de eventos e notificações) que precisam de validação constante. Segundo Amaral, Fleury e Isoni (2019, p. 68), o Scrum proporciona uma visão clara dos resultados, disciplina na execução e um ambiente colaborativo focado na resolução de problemas técnicos.

### Divisão de Papéis

A equipe está estruturada da seguinte forma para garantir o fluxo de desenvolvimento da agenda:

- Scrum Master: Pablo Luiz Amaro de Miranda, responsável por garantir que o fluxo de trabalho não sofra impedimentos e que as cerimônias do Scrum sejam seguidas.


### Processo

Para o acompanhamento das tarefas, a equipe utiliza o GitHub Projects, configurado com um quadro Kanban que reflete o ciclo de vida de cada funcionalidade do sistema de agenda:

- Backlog: Recebe todas as necessidades e regras de negócio do sistema (ex: "Criar cálculo de média de gols", "Implementar triagem da categoria Sub-20").

- To Do: Lista de tarefas selecionadas para a Sprint atual do footmetrics.

- In Progress: Algoritmos e regras de validação que estão sendo codificados no momento.

- Ready to Test: Requisitos de cálculos esportivos já codificados e aguardando validação em ambiente de teste.

- Testing: Etapa onde se verifica se as funções matemáticas (médias, taxas de ocupação do estádio e lógicas de expulsão) estão funcionando sem erros ou inconsistências nos resultados.

- Done: Tarefas concluídas, validadas e integradas à versão principal do repositório do sistema.


### Etiquetas
<p>As tarefas relacionadas à agenda são categorizadas para facilitar a identificação visual no repositório:</p>

<ul>
  <li>Bug (Erro no código)</li>
  <li>Desenvolvimento (Development)</li>
  <li>Documentação (Documentation)</li>
  <li>Gerência de Projetos (Project Management)</li>
  <li>Infraestrutura (Infrastructure)</li>
  <li>Testes (Tests)</li>
</ul>

<figure> 
  <img src="https://user-images.githubusercontent.com/100447878/164068979-9eed46e1-9b44-461e-ab88-c2388e6767a1.png"
    <figcaption>Figura 3 - Tela do esquema de cores e categorias</figcaption>
</figure> 
  
### Ferramentas

Os artefatos do Sistema de Agenda de Compromissos são desenvolvidos utilizando as plataformas listadas na tabela abaixo:

| AMBIENTE                            | PLATAFORMA                         | LINK DE ACESSO                         |
|-------------------------------------|------------------------------------|----------------------------------------|
| Repositório de código fonte         | GitHub                             | https://github.com/Pablo-Luiz-AM/gestao-futebol-algoritmos.git                           |
| Documentos do projeto|GitHub|  |
| Projeto de Interface                | Figma                              |                        |
| Gerenciamento do Projeto            | GitHub Projects                    | http://....                            |
| Hospedagem                          | GitHub Pages                       | http://....                            |


### Estratégia de Organização de Codificação 

Todos os artefatos relacionados a implementação e visualização dos conteúdos do projeto do site são inseridos na pasta [codigo-fonte]().
