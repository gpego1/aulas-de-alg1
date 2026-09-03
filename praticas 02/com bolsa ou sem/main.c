#include <stdio.h>

int main() {
    int renda, nota;
    scanf("%d %d", &renda, &nota);
    
    if (renda < 2000 || nota >= 80) {
        printf("Bolsa");
    } else {
        printf("Sem bolsa");
    }
}