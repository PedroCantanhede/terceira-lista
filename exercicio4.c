//Bibliotecas
#include <stdio.h>
#include <locale.h>

int main() {
    // Regionalização (Desbuga palavras com acento)
    setlocale(LC_ALL, "Portuguese_Brazil");

    // Declaração das Variáveis
    int cont, cont2, mat[4][4];

    printf("\n --- Matriz 4 x 4 ---\n\n");

    for(cont=0;cont<4;cont++) {
        for(cont2=0;cont2<4;cont2++) {
            mat[cont][cont2] = (cont+1)*(cont2+1);
            printf("   %d ", mat[cont][cont2]);
        }
        printf("\n");
    }

    return 0;
}
