#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if (argc <= 1) {
        printf("Erro: Nenhum número fornecido como argumento.\n");
        return 1;
    }

    float soma = 0, menor = atof(argv[1]), maior = atof(argv[1]);

    for (int i = 1; i < argc; i++) {
        float num = atof(argv[i]);
        soma += num;
        if (num < menor) menor = num;
        if (num > maior) maior = num;
    }

    float media = soma / (argc - 1);

    printf("Quantidade de números recebidos: %d\n", argc - 1);
    printf("Valor médio dos números: %.2f\n", media);
    printf("Menor número: %.2f\n", menor);
    printf("Maior número: %.2f\n", maior);
    
    return 0;
}
