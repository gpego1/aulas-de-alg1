#include <stdio.h>
#include <ctype.h>

int main() {
    char frase1[100], frase2[100];
    int iguais = 1;

    scanf(" %99[^\n]", frase1);

    scanf(" %99[^\n]", frase2);

    for (int i = 0; frase1[i] != '\0' || frase2[i] != '\0'; i++) {
        if (tolower(frase1[i]) != tolower(frase2[i])) {
            iguais = 0;
            break;
        }
    }

    if (iguais) {
        printf("As frases sao iguais\n");
    } else {
        printf("As frases sao diferentes\n");
    }

    return 0;
}