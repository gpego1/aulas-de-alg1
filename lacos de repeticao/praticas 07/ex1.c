#include <stdio.h>

int main() {
    int n;

    while (scanf("%d", &n) == 1) {
        if (n > 5 && n < 200) {
            for (int i = 2; i <= n; i += 2) {
                printf("%d^2 = %d\n", i, i * i);
            }
        } else {
            printf("Valor invalido! Tente novamente!\n");
        }
    }

    return 0;
}