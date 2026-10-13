#include <stdio.h>

int main() {
    int a, b;
    int soma = 0;
    scanf("%d %d", &a, &b);
    
    if (a > b) {
        while (b <= a) {
            printf("%d ", b);
            soma += b;
            b++;
        }
    } else {
        while (a <= b) {
            printf("%d ", a);
            soma += a;
            a++;
        }
    }
    printf("\n");
    printf("Soma = %d", soma);
    
    return 0;
}