#include <stdio.h>

int main() {
    int input, qtdPortas;
    
    scanf("%d %d", &input, &qtdPortas);
    
    if (input == 1) {
        printf("Voce escolheu um carro com %d portas.", qtdPortas);
    } else if (input == 2 && qtdPortas == 1) {
        printf("Voce escolheu uma moto esportiva.");
    } else if (input == 2 && qtdPortas == 2) {
        printf("Voce escolheu uma moto comum.");
    } else if (input == 2 && (qtdPortas > 2 || qtdPortas < 1)) {
        printf("Opcao invalida para o tipo de moto.");
    } else {
        printf("Opcao invalida.");
    }
    
    return 0;
}