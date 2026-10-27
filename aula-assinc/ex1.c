#include <stdio.h>

int main()
{
    int n;
    int sum = 0;
    int countMaior100 = 0;
    scanf("%d", &n);
    
    if (n < 1 && n > 10) {
        printf("Entrada inválida.");
        return 0;
    }
    
    int vect[n];
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &vect[i]);
        sum += vect[i];
        if (vect[i] > 100) {
            countMaior100 += 1;
        }
    }
    
    
    printf("Soma: %d \n", sum);
    printf("Elementos maiores que 100: %d \n", countMaior100);
    printf("Ordem Inversa: ");
    for (int i = n -1; i >= 0; i--) {
        printf("%d ", vect[i]);
    }
    printf("\n");
    
    return 0;
}