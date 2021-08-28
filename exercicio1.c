//Bibliotecas
#include <stdio.h>
#include <locale.h>

int main() {
    // Regionalização (Desbuga palavras com acento)
    setlocale(LC_ALL, "Portuguese_Brazil");

    // Declaração das Variáveis
    int cont, soma, vet[] = {1, 0, 5, -2, -5, 7};

    printf("---- Vetor ---- \n");

    soma = vet[0] + vet[1] + vet[5];
    printf("Soma dos valores nas posicoes 0, 1 e 5 do vetor: %d \n", soma);

    vet[4] = 100;

    for(cont=0;cont<6;cont++) {
        printf("%d \n", vet[cont]);
    }

    return 0;
}


