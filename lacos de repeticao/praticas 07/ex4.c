#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    for (int linha = 1; linha <= n; linha++) {
        for (int coluna = 1; coluna <= n; coluna++) {
            if (coluna <= linha) {
                printf("-");
            } else {
                printf("%d", linha);
            }

            if (coluna < n) {
                printf(" ");
            }
        }

        printf("\n");
    }

    return 0;
}