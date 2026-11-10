#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int i, j;
    double media = 0;
    
    double m[n][n];
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%lf", &m[i][j]);
        }
    }
    double menor = m[0][0];
    double maior = m[0][0];
    
    for (i = 0; i < n; i++) {
        media = 0.0;
        for (j = 0; j < n; j++) {
            if (m[i][j] > maior) {
                maior = m[i][j];
            } else if (m[i][j] < menor) {
                menor = m[i][j];
            }

            media += m[i][j];
        }
        printf("Media da linha %d: %.2lf \n", i + 1, media / n);
        
    }
    printf("Menor valor: %.0lf \n", menor);
    printf("Maior valor: %.0lf \n", maior);
    
    
    return 0;

}