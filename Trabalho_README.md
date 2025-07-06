# 🛳️ Jogo de Batalha Naval - MateCheck (Versão Didática)

Este é um projeto de **Batalha Naval programado em linguagem C**, desenvolvido com fins **educacionais e exploratórios**. O código é estruturado em três níveis de complexidade (Novato, Aventureiro e Mestre), permitindo o entendimento gradual de manipulação de matrizes, posicionamento de navios e aplicação de padrões em forma de habilidades especiais.

## 🚀 Objetivos do Projeto

- Ensinar como manipular matrizes em C de forma prática e visual
- Simular um tabuleiro de Batalha Naval com posicionamento de navios
- Representar ataques com diferentes padrões geométricos (Cone, Cruz e Octaedro)
- Servir como base para versões mais interativas ou visuais do jogo

## 🧠 Níveis do Código

### 🟢 Nível Novato – Posicionamento Básico
- Matriz `5x5`
- Um navio na horizontal
- Um navio na vertical
- Exibe coordenadas ocupadas

### 🔵 Nível Aventureiro – Expansão do Tabuleiro
- Matriz `10x10`
- Quatro navios:
  - Horizontal
  - Vertical
  - Diagonal ↘
  - Diagonal ↙
- Exibe tabuleiro com `0 = vazio` e `3 = ocupado`

### 🔴 Nível Mestre – Habilidades Especiais
- Matrizes que simulam áreas de ataque:
  - **Cone**
  - **Cruz**
  - **Octaedro**
- Representação visual no terminal com `1 = atingido`, `0 = livre`

## 🖥️ Como Executar

1. Clone o repositório:

```bash
git clone https://github.com/Cursos-TI/desafio-batalha-naval-VictorSilva631/blob/main/Desenvolvimento
cd batalha_naval
```

2. Compile o código:

```bash
gcc batalha_naval.c -o batalha_naval
```

3. Execute:

```bash
./batalha_naval (Linux)
batalha_naval.exe (Windowns)
```

## 📂 Estrutura dos Arquivos

```
📁 batalha-naval-matecheck
├── batalha_naval.c      # Código principal do jogo
└── README.md            # Este arquivo
```

## 📌 Tecnologias Usadas

- Linguagem C (padrão ANSI C)
- Terminal para exibição (modo texto)
- Compilador: `gcc` recomendado

