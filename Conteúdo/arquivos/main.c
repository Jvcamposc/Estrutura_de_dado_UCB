#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]){
    
//Declaração de um ponteiro para o tipo FILE, que será usado para manipular o arquivo.

    FILE *arq_txt;

//Abre o arquivo chamado "arq.txt" no modo de escrita 
//("a" para append, ou seja, adicionar conteúdo ao final do arquivo) 
//e atribui o ponteiro de arquivo retornado por fopen à variável arq_txt.

    arq_txt = fopen("arq.txt", "a");

//Verifica se houve algum erro ao abrir o arquivo. Se arq_txt for NULL

    if(arq_txt == NULL){
        printf("Erro ao abrir o arquivo arq.txt");
        exit(1);
    }
//Usa fprintf para escrever o primeiro argumento passado para o programa (argv[1]) no arquivo arq_txt.

    fprintf(arq_txt, argv[1]);
    fprintf(arq_txt, "\n");
    
//fecha o arquivo arq_txt após concluir a escrita.

    fclose(arq_txt);

    exit(0);
}