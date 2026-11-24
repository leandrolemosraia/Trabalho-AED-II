#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "trie.h"

int main() {
    NoTrie *raiz = criarNoTrie();
    
    carregarPasta(raiz, "documentos");

    char prefixo;
    printf("Digite o prefixo para pesquisa: ");
    scanf("%99s", prefixo);

    for (int i = 0; prefixo[i]; i++) {
        prefixo[i] = tolower((unsigned char)prefixo[i]);
    }

    NoTrie *no = buscarPrefixo(raiz, prefixo);
    if (no != NULL) {
        char buffer;
        strcpy(buffer, prefixo);
        int contador = 0;
        sugerirAutocomplete(no, buffer, strlen(prefixo), &contador);
    } else {
        printf("Nenhum termo encontrado.\n");
    }

    liberartrie(raiz);
    return 0;
}