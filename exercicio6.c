//Bibliotecas
#include <stdio.h>
#include <locale.h>

int main() {
    // Regionalização (Desbuga palavras com acento)
    setlocale(LC_ALL, "Portuguese_Brazil");

    // Declaração das Variáveis
    float mtz[3][6], colImpar=0, colMedia2=0, colMedia4=0, soma, media2, media4;

    for (size_t lin=0;lin<3;lin++){
        for (size_t col=0;col<6;col++){
            printf("\nDigite o valor da linha %d e da coluna %d: \n", lin+1, col+1);
            scanf("%f", &mtz[lin][col]);

            if(col%2==0) colImpar += mtz[lin][col];
            if(col==1) colMedia2 += mtz[lin][col];
            if(col==3) colMedia4 += mtz[lin][col];
        }
        printf("\n");
    }

    printf("\n    ------- Matriz -------\n");
    for (size_t lin=0;lin<3;lin++){
        printf("\n");
        for (size_t col=0;col<6;col++){
            printf("%.1f   ", mtz[lin][col]);
            if(col==5) mtz[lin][5] = mtz[lin][0] + mtz[lin][1];
        }
    }

    printf("\n\n   ---- Matriz Modificada ----\n");
    for (size_t lin=0;lin<3;lin++){
        printf("\n");
        for (size_t col = 0; col < 6; col++)
            printf("%.1f   ", mtz[lin][col]);
    }

    soma = colImpar;
    media2 = colMedia2/3;
    media4 = colMedia4/3;

    printf("\n\n a-) Soma de todos os elementos da colunas impares: %.1f", soma);
    printf("\n b-) Media dos elementos das segundas colunas: %.1f", media2);
    printf("\n c-) Media dos elementos das quartas colunas: %.1f", media4);

    return 0;
}

