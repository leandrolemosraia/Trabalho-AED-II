#include<stdio.h>
#include<stdlib.h>

typedef struct NoTrie {
    struct NoTrie *filhos[26];
    int ehFimDePalavra;
    // Na Semana 2, você adicionará aqui o ponteiro para a raiz da ABB:
    // struct NoABB *docs;
} NoTrie;


NoTrie* criarNoTrie();
void inserirPalavra(NoTrie* raiz, const char* palavra);
NoTrie* buscarPrefixo(NoTrie* raiz, const char* prefixo);
void sugerirAutocomplete(NoTrie* noPrefixo, char* buffer, int nivel, int* contador);
