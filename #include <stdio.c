#include <stdio.h>
int main(){
    //==== TORRE (usa FOR)====
    // A TORRE se move 5 casas para a direita
    printf("\nMovimento da Torre: \n");

    for (int i = 1; i <= 5; i++){
        printf("Direita\n");
    }

    //=== BISPO (usa While)===
    //O Bispo se move 5 casas na diagonal para cima e á direita
    printf("\nMovimento do Bispo:\n");

    int j = 1;
    while (j <= 5) {
        printf("Cima Direita\n");
        j++;
    }

    //===RAINHA (usa DO-WHILE)===
    // A rainha se move 8 casas para a esquerda
    printf("\nMovimento da Rainha:\n");

    int k = 1;
    do{
        printf("Esquerda\n");
        k++;
    } while (k <= 8);

    return 0;
}