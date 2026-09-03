#include <stdio.h>

int main() {
    int numero;
    scanf("%d", &numero);
    
    if(numero == 0) {
        printf("Zero");
        } else if (numero > 0) {
        printf("Positivo");
    } else {
        printf("Negativo");
    }
}