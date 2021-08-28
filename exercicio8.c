//Bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

// Função que realiza o sorteio
int sortear( int a[][5] ) {
    for (size_t i=0;i<5;i++){
        for (size_t j=0;j<5;j++){
            printf("%6d",a[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

int main () {
    // Regionalização (Desbuga palavras com acento)
    setlocale(LC_ALL, "Portuguese_Brazil");

    // Declaração das Variáveis
    int num, segundos, sorteio[5][5], numeros[100];

    segundos = time(0);

    srand(segundos);
    for (size_t i=0;i<99;i++) {
        numeros[i] = 0;
    }

    for (size_t i=0;i<5;i++) {
        for (size_t j=0;j<5;j++) {
            do {
                num = (rand() % 100 ) ;
            } while (numeros[num]);
            sorteio[i][j] = num;
        }
    }

    printf("\n    B     I     N     G     O\n\n");
    sortear(&sorteio);

    return 0;
}

