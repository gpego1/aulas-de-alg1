#include <stdio.h>

int main() {
    int n;

    scanf("%d", &n);

    if (n <= 0) {
        printf("Tamanho invalido!\n");
        return 1;
    }

    int numeros[n];
    char caracteres[n + 1];

    for (int i = 0; i < n; i++) {
        scanf("%d", &numeros[i]);

        caracteres[i] = (char) numeros[i];
    }

    caracteres[n] = '\0';

    printf("%s\n", caracteres);

    return 0;
}