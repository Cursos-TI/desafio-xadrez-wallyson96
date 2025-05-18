#include <stdio.h>

int main() {
   
    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;

    printf("Movimento da Torre:\n");
    for (int i = 0; i < casasTorre; i++) {
        printf("Direita\n");
    }



    printf("\nMovimento do Bispo:\n");
    int i = 0;
    while (i < casasBispo) {
        printf("Cima Direita\n");
        i++;
    }


    printf("\nMovimento da Rainha:\n");
    int j = 0;
    do {
        printf("Esquerda\n");
        j++;
    } while (j < casasRainha);

    return 0;
}

