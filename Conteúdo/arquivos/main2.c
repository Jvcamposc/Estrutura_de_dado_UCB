#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]){
//Declaração de uma string txt com tamanho para armazenar uma linha lida do arquivo. 
//FILE *arq_txt; declara um ponteiro para o tipo FILE, 
//que será usado para manipular o arquivo.

    char txt[100];
    FILE *arq_txt;
    
//Abre o arquivo chamado "arq.txt" no modo de leitura ("r") 
//e atribui o ponteiro de arquivo retornado por fopen à variável arq_txt.

    arq_txt = fopen("arq.txt", "r");

//Verifica se houve algum erro ao abrir o arquivo. 
//Se arq_txt for NULL, significa que ocorreu um erro ao abrir o arquivo, 
//então uma mensagem de erro é impressa e o programa é encerrado com código de saída 1 usando exit(1).

    if(arq_txt == NULL){
        printf("erro ao abrir arquivo arq.txt");
        exit(1);
    }

//Este loop while lê uma linha inteira do arquivo arq_txt usando fscanf. 
//O formato %[^\n]\n indica que fscanf deve ler todos os caracteres até encontrar um \n (nova linha).
//O loop continua enquanto não atingir o final do arquivo (EOF). 
//Em cada iteração do loop, a linha lida é armazenada na variável txt e então impressa usando printf.

    while(fscanf(arq_txt, "%[^\n]\n", &txt) != EOF){
        printf("%s\n", txt);
    }

//Fecha o arquivo arq_txt após terminar de ler todas as linhas. 
//Isso é importante para liberar os recursos do sistema operacional associados ao arquivo.

    fclose(arq_txt);

    exit(0);
}