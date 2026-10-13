#include <stdio.h>

int main() {
    double salario;
    int i = 6;
    double media = 0.0;
    double soma = 0.0;
    
    while (i > 0) {
        scanf("%lf", &salario);
        
        soma += salario;
        i--;
    }
    
    media = soma/6;
    printf("Media Semestral=R$ %.2lf", media);
    
}