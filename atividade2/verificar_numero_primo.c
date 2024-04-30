#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {
    int num = atoi(argv[1]);
//Imprime uma mensagem de erro informando que nenhum número foi fornecido
    if (argc <= 1) {
        printf("Favor, digite um numero");
        return 1;
    }
//Verifica se o número fornecido é menor que 2. Se for, imprime "false "
    if (num < 2) {
        return 0;
    }
//Se o número é divisível por algum número entre 2 
    for (int i = 2; i <= num / 2; i++) {
        if (num % i == 0) {
            printf("//false");
            return 0;
        }
    }
    printf("//true");
    return 0;
}
