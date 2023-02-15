# Jogo da Velha em C

Este é um programa simples que implementa o jogo da velha em C. O jogo é jogado por dois jogadores, X e O, que competem para completar uma linha, coluna ou diagonal com suas peças.
Funcionalidades

O programa começa com um tabuleiro vazio e solicita às entradas do jogador para colocar sua peça no tabuleiro. O programa verifica se a posição está vazia e, se estiver, a peça é colocada. Caso contrário, o programa avisa o jogador que a posição já foi preenchida e solicita outra entrada.

O programa verifica o estado atual do jogo após cada jogada e determina se há um vencedor ou se o jogo empatou.
Como Jogar

O programa pode ser executado no terminal após compilar o arquivo. Durante a execução, o programa solicitará as coordenadas de cada jogador, que podem ser inseridas no formato "linha, coluna".

O programa exibe o tabuleiro atualizado após cada jogada e continua a solicitar entradas do usuário até que um jogador vença ou o jogo termine em empate.
Como Compilar

Para compilar o programa, basta executar o seguinte comando em um terminal:

gcc -o jogo_da_velha jogo_da_velha.c

Isso criará um arquivo executável chamado jogo_da_velha. Em seguida, o programa pode ser executado digitando o seguinte comando:

bash

./jogo_da_velha
