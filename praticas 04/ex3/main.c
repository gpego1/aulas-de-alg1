#include <stdio.h>

int main() {
    int idade, peso, vezesDoou;
    char genero;

    scanf("%d %d %c %d", &idade, &peso, &genero, &vezesDoou);

    if (genero != 'm' && genero != 'f') {
        printf("Genero invalido");
    } 
    else if (idade >= 18 && idade <= 72 && peso >= 42) {
        
        if (genero == 'm' && vezesDoou <= 3) {
            printf("Pode ser doador");
        } 
        else if (genero == 'f' && vezesDoou <= 4) {
            printf("Pode ser doador");
        } 
        else {
            printf("Nao pode ser doador");
        }

    } 
    else {
        printf("Nao pode ser doador");
    }

    return 0;
}