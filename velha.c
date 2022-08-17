#include<stdio.h>
#include<stdlib.h>

void criarTabuleiro(char jogo[3][3]){
    for(int lin = 0; lin<3;lin++){
        for(int col = 0;col<3;col++){
            printf("\t%c\t", jogo[lin][col]);
        }
        printf("\n\n\n");
    }
}

char verifica(char jogo[3][3]){
    int elemento = 0, numIgual = 0;
    char vetor[3];

    //verifica a diagonal principal

    for(int lin = 0;lin<3;lin++){
        for(int col = 0; col<3; col++){
            if(col == lin){
                vetor[elemento] = jogo[lin][col];
                elemento++;
            }
        }
    }
    for(int i = 0; i<3; i++){
        if(vetor[i] == vetor[0])
            numIgual++;
    }
    if(numIgual == 3)
        return vetor[0];

    //verifica a diagonal secundaria

    numIgual = 0;
    elemento = 0;
    int lin = 2, col = 0;
    for(elemento;elemento <3;elemento++){
        vetor[elemento] = jogo[lin][col];
        lin--;
        col++;
    }
    for(int i = 0; i<3; i++){
        if(vetor[i] == vetor[0])
            numIgual++;
    }
    if(numIgual == 3)
        return vetor[0];

    //verifica as linhas

    for(int lin = 0;lin<3; lin++){
        numIgual = 0;
        elemento = 0;
        for(int col = 0; col<3; col++){
            vetor[elemento] = jogo[lin][col];
            elemento++;
        }
        for(int i = 0; i<3; i++){
            if(vetor[i] == vetor[0])
                numIgual++;
        }
        if(numIgual == 3)
            return vetor[0];
    }

    //verifica as colunas

    for(int lin = 0;lin<3; lin++){
        numIgual = 0;
        elemento = 0;
        for(int col = 0; col<3; col++){
            vetor[elemento] = jogo[col][lin];
            elemento++;
        }
        for(int i = 0; i<3; i++){
            if(vetor[i] == vetor[0])
                numIgual++;
        }
        if(numIgual == 3)
            return vetor[0];
    }
return 'r';
}

int main(){
    char jogo[3][3] = {{' ', ' ', ' '}, {' ',' ',' '},{' ',' ',' '}};
    int coor[2];
    char player[2] = {'x','o'};

    do{
        system("cls");
        criarTabuleiro(jogo);

        for(int i = 0; i<2; i++){
            printf("\n\nCoordenadas do jogador %c: ", player[i]);
            scanf("%d,%d", &coor[0], &coor[1]);
            if(jogo[coor[0]-1][coor[1]-1] == ' ')
                jogo[coor[0]-1][coor[1]-1] = player[i];
            else{
                printf("\nEssa posicao foi preenchida! Escolha outra!");
                printf("\nCoordenadas do jogador %c: ", player[i]);
                scanf("%d,%d", &coor[0], &coor[1]);
                if(jogo[coor[0]-1][coor[1]-1] == ' ')
                    jogo[coor[0]-1][coor[1]-1] = player[i];
                else
                    printf("\nPerdeu a vez!");
            }
            system("cls");
            criarTabuleiro(jogo);
        }
    }while(verifica(jogo) != 'x' && verifica(jogo) != 'o');

    printf("\n\nJogador '%c' e vencedor!\n\n", verifica(jogo));
    system("pause");

return 0;
}
