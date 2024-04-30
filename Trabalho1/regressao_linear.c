#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int x;
    float y;
} Ponto;

int main(int argc, char* argv[]) {
    if (argc != 2) {
        printf("Uso: %s <arquivo_de_dados>\n", argv[0]);
        return 1;
    }

    FILE *arq_dados = fopen(argv[1], "r");
    if (arq_dados == NULL) {
        printf("Erro ao abrir o arquivo %s\n", argv[1]);
        return 1;
    }

    Ponto *pontos = NULL;
    int capacidade = 0;
    int tamanho = 0;
    int x;
    float y;

    // Ler os pontos do arquivo
    while (fscanf(arq_dados, "%d,%f", &x, &y) == 2) {
        // Alocar mais espaço se necessário
        if (tamanho >= capacidade) {
            capacidade = (capacidade == 0) ? 1 : capacidade * 2;
            pontos = realloc(pontos, capacidade * sizeof(Ponto));
            if (pontos == NULL) {
                printf("Erro ao alocar memória\n");
                fclose(arq_dados);
                return 1;
            }
        }
        pontos[tamanho].x = x;
        pontos[tamanho].y = y;
        tamanho++;
    }

    fclose(arq_dados);

    if (tamanho == 0) {
        printf("Nenhum ponto encontrado no arquivo.\n");
        free(pontos);
        return 1;
    }

    // Calcular médias
    int soma_x = 0;
    float soma_y = 0;
    for (int i = 0; i < tamanho; i++) {
        soma_x += pontos[i].x;
        soma_y += pontos[i].y;
    }
    float media_x = (float)soma_x / tamanho;
    float media_y = soma_y / tamanho;

    // Calcular inclinação e intercepção
    float soma_xy = 0;
    float soma_x_quadrado = 0;
    for (int i = 0; i < tamanho; i++) {
        soma_xy += pontos[i].x * pontos[i].y;
        soma_x_quadrado += pontos[i].x * pontos[i].x;
    }
    float inclinacao = (soma_xy - tamanho * media_x * media_y) / (soma_x_quadrado - tamanho * media_x * media_x);
    float intercepcao = media_y - inclinacao * media_x;

    printf("Resultado: y = %.2fx + %.2f\n", inclinacao, intercepcao);

    // Liberar memória alocada
    free(pontos);

    return 0;
}
