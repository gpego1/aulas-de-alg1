#include <stdio.h>

int main() {
    int x, y, z, w;
    scanf("%d %d %d %d", &x, &y, &z, &w);
    
    if (x == y || z != w) {
        printf("Resultado: Ao menos uma expressão é VERDADEIRA");
    } else {
        printf("Resultado: Todas as expressões são FALSAS");
    }
}