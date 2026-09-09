#include <stdio.h>

int main() {
    int tipoPassageiro;
    double distancia;
    double valorBase = 5.00;
    scanf("%d %lf", &tipoPassageiro, &distancia);
    
    if (distancia > 10.00) {
        double kmAMais = (distancia - 10) * 0.50;
        valorBase = valorBase + kmAMais;
    }
    
    if (tipoPassageiro == 1) {
        printf("Valor da passagem: R$ %.2lf", valorBase * 0.50);
    } else if (tipoPassageiro == 2) {
        printf("Valor da passagem: R$ %.2lf", valorBase * 0.30);
    } else if (tipoPassageiro == 3) {
        printf("Valor da passagem: R$ %.2lf", valorBase);
    }
}