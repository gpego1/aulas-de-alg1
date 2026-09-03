#include <stdio.h>

int main() {
    int notaFinal, frequencia;
    
    scanf("%d %d", &notaFinal, &frequencia);
    
    if (notaFinal >= 60 && frequencia >= 75) {
        printf("Aprovado");
    } else {
        printf("Reprovado");
    }
}