# Batalha Naval em C

## Descrição do Projeto
Este projeto é uma implementação do jogo Batalha Naval em C, desenvolvido para a Faculdade Estácio. O programa cria um tabuleiro 10x10 e posiciona quatro navios de diferentes orientações (horizontal, vertical e diagonais). Além disso, foram implementadas habilidades especiais que afetam áreas específicas do tabuleiro, simulando ataques com diferentes padrões.

## Funcionalidades
- Representação de um tabuleiro 10x10.
- Posicionamento de 4 navios:
  - 1 navio horizontal.
  - 1 navio vertical.
  - 2 navios diagonais.
- Implementação de 3 habilidades especiais com diferentes áreas de efeito:
  - Cone.
  - Cruz.
  - Octaedro.
- Exibição do tabuleiro no console com diferentes valores para representar elementos:
  - `0` = Água.
  - `3` = Navios.
  - `5` = Área afetada por habilidades.

## Como Executar o Programa
1. Instale um compilador C, como `gcc`.
2. Compile o código usando o comando:
   ```sh
   gcc batalha_naval.c -o batalha_naval
   ```
3. Execute o programa:
   ```sh
   ./batalha_naval
   ```

## Estrutura do Código
- **Função `aplicarHabilidade`**: Aplica efeitos de habilidades específicas no tabuleiro, alterando suas posições conforme a matriz de habilidade correspondente.
- **Função `main`**:
  - Inicializa o tabuleiro.
  - Posiciona os navios de forma fixa.
  - Aplica as habilidades em pontos predefinidos.
  - Exibe o tabuleiro final no console.

## Exemplo de Saída
```sh
0 0 0 0 0 0 0 0 3 0
0 0 0 0 0 0 0 3 0 0
0 0 5 5 5 0 3 0 0 0
0 5 5 3 5 5 0 0 0 0
0 0 5 5 5 0 0 0 0 0
0 3 0 0 0 0 0 0 0 0
0 3 5 5 5 5 5 0 0 0
0 3 0 0 0 0 0 3 0 0
0 0 0 0 0 0 3 0 0 0
0 0 0 0 0 0 0 0 0 0
```

## Melhorias Futuras
- Implementação de interação com o usuário para escolha de posições e ataques.
- Desenvolvimento de uma interface gráfica para melhor visualização.
- Implementação de modos multiplayer.

## Autor
Desenvolvido para a disciplina de programação da Faculdade Estácio.

