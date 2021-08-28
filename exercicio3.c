//Bibliotecas
#include <stdio.h>
#include <locale.h>

int main() {
    // Regionalização (Desbuga palavras com acento)
    setlocale(LC_ALL, "Portuguese_Brazil");

    // Declaração das Variáveis
    int cont, vet[10], vet2[10], vet3[10], par, impar;

    printf("Informe 10 valores para o vetor 1: \n");

    for(cont=0;cont<10;cont++) {
        scanf("%d", &vet[cont]);
    }

    printf("Informe 10 valores para o vetor 2: \n");

    for(cont=0;cont<10;cont++) {
        scanf("%d", &vet2[cont]);
    }

    printf("----- Vetor 1 ----- \n");
    for(cont=0;cont<10;cont++) {
        printf("%d \n", vet[cont]);
    }

    printf("----- Vetor 2 ----- \n");
    for(cont=0;cont<10;cont++) {
        printf("%d \n", vet2[cont]);
    }

    printf("----- Vetor 3 ----- \n");
    for(cont=0;cont<10;cont++) {
        if(cont%2!=0) {
            vet3[cont] = vet2[cont];
        } else {
            vet3[cont] = vet[cont];
        }

        printf("%d \n", vet3[cont]);
    }

    return 0;
}


