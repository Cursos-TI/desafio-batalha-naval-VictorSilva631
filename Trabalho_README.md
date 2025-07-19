Prezado avaliador, este é um código de **Batalha Naval programado em linguagem C**. O código é estruturado em três níveis de complexidade (Novato, Aventureiro e Mestre), permitindo o entendimento gradual de manipulação de matrizes, posicionamento de navios e aplicação de padrões em forma de habilidades especiais.

##  Objetivos do Projeto

- Ensinar como manipular matrizes em C de forma prática e visual
- Simular um tabuleiro de Batalha Naval com posicionamento de navios
- Representar ataques com diferentes padrões geométricos (Cone, Cruz e Octaedro)
- Servir como base para versões mais interativas ou visuais do jogo

##  Níveis do Código

###  Nível Novato – Posicionamento Básico
- Matriz `5x5`
- Um navio na horizontal
- Um navio na vertical
- Exibe coordenadas ocupadas

###  Nível Aventureiro – Expansão do Tabuleiro
- Matriz `10x10`
- Quatro navios:
  - Horizontal
  - Vertical
  - Diagonal ↘
  - Diagonal ↙
- Exibe tabuleiro com `0 = vazio` e `3 = ocupado`

###  Nível Mestre – Habilidades Especiais
- Matrizes que simulam áreas de ataque:
  - **Cone**
  - **Cruz**
  - **Octaedro**
- Representação visual no terminal com `1 = atingido`, `0 = livre`
