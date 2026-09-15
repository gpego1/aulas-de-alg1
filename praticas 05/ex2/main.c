#include <stdio.h>

int main() {
    int input, subTipo;
    scanf("%d %d", &input, &subTipo);
    
    if (input != 1 && input != 2) {
        printf("Tipo invalido");
        return 0;
    }
    
    if (subTipo != 1 && subTipo != 2) {
        printf("Subtipo invalido");
        return 0;
    }
    
    if (input == 1 && subTipo == 1) {
        printf("Voce escolheu: Fruta - Citrica -");
    } else if (input == 1 && subTipo == 2) {
        printf("Voce escolheu: Fruta - Doce -");
    } else if (input == 2 && subTipo == 1) {
        printf("Voce escolheu: Legume - Raiz -");
    } else if (input == 2 && subTipo == 2) {
        printf("Voce escolheu: Legume - Folha -");
    }
    
  
    return 0;
}