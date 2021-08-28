//Bibliotecas
#include <stdio.h>
#include <locale.h>

int main() {
    // Regionalização (Desbuga palavras com acento)
    setlocale(LC_ALL, "Portuguese_Brazil");

    // Declaração das Variáveis
    int cont, pMaior, pMenor, maior, menor, vet[5];

    printf("Informe 5 valores para o vetor: \n");

    for(cont=0;cont<5;cont++) {
        scanf("%d", &vet[cont]);
    }

    maior = vet[cont];
    menor = vet[0];
    printf("----- Vetor ----- \n");
    for(cont=0;cont<5;cont++) {
        if (vet[cont] > maior){
            pMaior = cont;
            maior = vet[cont];
        } if (vet[cont] < menor){
            pMenor = cont;
            menor = vet[cont];
        }
        printf("%d \n", vet[cont]);
    }

    printf("\n ----- Maior e Menor ----- \n");
    // Valores
    printf("Maior valor do vetor: %d \n", maior);
    printf("Menor valor do vetor: %d \n", menor);
    // Índice
    printf("Posicao do maior valor do vetor: %d \n", pMaior);
    printf("Posicao do menor valor do vetor: %d \n", pMenor);

    return 0;
}


