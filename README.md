# Desafio Batalha Naval 
Um projeto que desafia habilidades de programação utilizando vetores e matrizes para simular um jogo de Batalha Naval, dividido em três níveis: Novato, Aventureiro e Mestre.

## Tecnologias utilizadas:
- Linguagem C

## Como utilizar

1 - Clone o projeto
```
git clone https://github.com/brunofs-dev/trabalhos-faculdade.git
```

2 - Acesse a pasta do projeto
```
cd trabalhos-faculdade
```

3 - Compile o código
```
gcc batalha_naval.c -o batalha_naval
```

4 - Execute o programa

Linux / macOS
```
./batalha_naval
```
Windows
```
batalha_naval.exe
```
## Funcionalidades
- Nível Novato:
  - Posiciona dois navios fixos no tabuleiro 5x5 (um vertical e um horizontal).
  - Exibe coordenadas de cada parte do navio.

- Nível Aventureiro:
  - Posiciona quatro navios no tabuleiro 10x10, incluindo diagonais.
  - Exibe o tabuleiro completo.

- Nível Mestre:
  - Implementa padrões de habilidades, como cone, cruz e octaedro.
  - Exibe o tabuleiro com áreas afetadas pelas habilidades.

## Estrutura
- nivelNovato(): implementa o nível Novato.
- nivelAventureiro(): implementa o nível Aventureiro.
- nivelMestre(): implementa o nível Mestre
-main(): função principal que exibe menu interativo e chama nível selecionado.

## Autor:
Bruno Ferreira

## Observações
- Código está comentado para facilitar compreensão
- Programa faz uso do do...while e switch para menu interativo.
- Cada nível é implementado em uma função separada, mantendo código organizado.