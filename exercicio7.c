//Bibliotecas
#include <stdio.h>
#include <locale.h>

int main() {
    // Regionalização (Desbuga palavras com acento)
    setlocale(LC_ALL, "Portuguese_Brazil");

    // Declaração das Variáveis
    float mtz[10][3];
    int piorNota1=0, piorNota2=0, piorNota3=0;

    // Declaração de Função
    int piorNota(float vet[3]);

    for (size_t lin = 0; lin < 5; lin++){
        for (size_t col = 0; col < 3; col++){
            printf("\n----------- Aluno %d -----------\n", lin+1);
            printf("\nDigite a nota da prova %d: \n", col+1);
            scanf("%f", &mtz[lin][col]);
        }

        switch (piorNota(mtz[lin])){
            case 1: piorNota1++;
            break;
            case 2: piorNota2++;
            break;
            case 3: piorNota3++;
            break;
        }
    }
    printf("\n\n---------- Quantidades das Piores Notas ----------\n");
    printf("\nPiores notas na P1: %d", piorNota1);
    printf("\nPiores notas na P2: %d", piorNota2);
    printf("\nPiores notas na P3: %d\n\n", piorNota3);
}

// Funcao
int piorNota(float vet[3]){
    float atual = vet[0], posicao;
    for (size_t cont = 1; cont < 3; cont++){
        if(atual>vet[cont]){
            atual = vet[cont];
            posicao = cont;
        }
    }
    return posicao+1;
}

