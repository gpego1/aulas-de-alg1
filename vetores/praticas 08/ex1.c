#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    float v[n];
    float x;

    
    for (int i =0; i < n; i++) {
        scanf("%f", &v[i]);
    }
    
    for (int i=0; i < n; i++) {
        scanf("%f", &x);
        if (v[i] < x) {
            printf("V[%d] = %.2f\n", i, v[i]);
        }
    }
    
    return 0;
}