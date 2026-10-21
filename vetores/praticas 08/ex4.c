#include <stdio.h>

int main() {
    int n;
    int count = 0;
    scanf("%d", &n);
    
    int vect[n];
    int vect2[n];
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &vect[i]);
    }
    for (int i =0; i < n; i++) {
        scanf("%d", &vect2[i]);
    }
    
    for(int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (vect[i] == vect2[j]) {
                count++;
            }
        }
    }
    printf("Quantidade de elementos iguais: %d", count);
    
    return 0;
}