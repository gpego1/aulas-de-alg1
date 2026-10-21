#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int vect[n];
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &vect[i]);    
    }
    
    for (int i = 0; i < n; i++) {
        if (vect[i] % 2 == 0) {
            printf("V[%d] = %d\n", i, vect[i]);
        }
    }
    
    return 0;
}