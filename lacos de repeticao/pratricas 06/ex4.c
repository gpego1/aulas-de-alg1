#include <stdio.h>

int main() {
    int n = 0;
    double valorReceber = 0.0;
    double valorPagar = 0.0;
    double entrada;
    
    scanf("%d", &n);
    
    if (n <= 0) {
        printf("Valor inválido para n");
    }
    
    while (n > 0) {
        scanf("%lf", &entrada);
        if (entrada != 0) {
            if (entrada < 0) valorPagar += entrada;
            if (entrada > 0) valorReceber += entrada;
        }
        n--;
    }
    
    printf("Pagar: R$ %.2lf \n", valorPagar);
    printf("Receber: R$ %.2lf \n", valorReceber);
    printf("Saldo: R$ %.2lf \n", valorPagar + valorReceber);

    
    return 0;
}