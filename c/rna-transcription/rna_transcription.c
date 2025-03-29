#include "rna_transcription.h"
#include <stdlib.h>
#include <string.h>

char converting_rnas(char); // function definitions

char converting_rnas(char c) {
    switch(c) {
        case 'A':
            return 'U';
        case 'C':
            return 'G';
        case 'G':
            return 'C';
        case 'T':
            return 'A';
        default:
            return '\0';
    }
}

char *to_rna(const char *dna) {

    size_t length = strlen(dna);
    char *rna = malloc(length);
    memset(rna, '\0', length);

    for (int i = 0; dna[i]; i++) {
        rna[i] = converting_rnas(dna[i]);
        if (!rna[i]) {
            free(rna);
            return NULL;
        }
    }

    return rna;
}
