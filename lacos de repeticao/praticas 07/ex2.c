#include <stdio.h>

int main() {
    double valorInicial;
    int i = 12;
    
    scanf("%lf", &valorInicial);
    
     if (valorInicial <= 0) {
        printf("Saldo insuficiente!");
        return 0;
    } 
    
    while (i > 0) {
        valorInicial *= 1.003; 
        i--;
    }
   
    printf("Rendimento=R$ %.2lf", valorInicial);
    
    
    return 0;
}