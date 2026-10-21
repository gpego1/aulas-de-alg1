#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    double vect[n];
    
    for (int i = 0; i < n; i++) {
        scanf("%lf", &vect[i]);
    }
    
    for (int i = 0; i < n; i++) {
        printf("V[%d] = %.1lf\n", i, vect[i]);
    }
    for (int i = n - 1; i >= 0; i--) {
        printf("V[%d] = %.1lf\n", i, vect[i]);
    }
    return 0;
}