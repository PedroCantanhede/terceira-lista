//Bibliotecas
#include <stdio.h>
#include <locale.h>

// Função para melhorar organização do código
int exibirMatriz( int mtz[][10] ) {
    int lin,col;
    for (lin=0;lin<10;lin++){
        for (col=0;col<10;col++){
            printf("%6d",mtz[lin][col]);
        };
        printf("\n");
    };
    printf("\n");
}

int main() {
    // Regionalização (Desbuga palavras com acento)
    setlocale(LC_ALL, "Portuguese_Brazil");

    // Declaração das Variáveis
    int resultado[10][10];
    int lin,col ;

    for (lin=0;lin<10;lin++) {
        for (col=0;col<10;col++) {
            if (lin==col) {
                resultado[lin][col] = (3*lin*lin) - 1;
            }
            else if (lin<col) {
                resultado[lin][col] = (2*lin + 7*col) - 2 ;
            } else {
                resultado[lin][col] = (4*lin*lin*lin) + (5*col*col) + 1;
            };
        }
    }
    printf("\n     ------------------- Matriz 10 x 10 -------------------\n\n");
    exibirMatriz(&resultado);

    return 0;
}
