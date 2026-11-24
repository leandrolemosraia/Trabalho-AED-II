
#include "trie.h"

NoTrie* criarNoTrie() {
    NoTrie *no = (NoTrie *)malloc(sizeof(NoTrie));
    if (no == NULL) {
        return NULL;
    }
    no->ehFimDePalavra = 0;
    for (int i = 0; i < 26; i++) {
        no->filhos[i] = NULL;
    }
    return no;
}
void inserirPalavra(NoTrie* raiz, const char* palavra)
{
   NoTrie *atual = raiz;
    for (size_t i = 0; palavra[i] != '\0'; i++) {
        int indice = palavra[i] - 'a'; //aqui o indice recebe 97 da tabela ascii
        /*if (indice < 0 || indice >= 26) {
            continue;
        }*/
        if (atual->filhos[indice] == NULL) {
            atual->filhos[indice] = criarNoTrie();
        }
        atual = atual->filhos[indice];
    }
    atual->ehFimDePalavra = 1;
}

NoTrie* buscarPrefixo(NoTrie* raiz, const char* prefixo);
{

}
void liberartrie(NoTrie *no) {
    if (no == NULL) {
        return;
    }
    for (int i = 0; i < 26; i++) {
        liberartrie(no->filhos[i]);
    }
    free(no);
}

void sugerirAutocomplete(NoTrie* noPrefixo, char* buffer, int nivel, int* contador)
{

}
