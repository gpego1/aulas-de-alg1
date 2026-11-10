#include <stdio.h>

int main() {
    int s = 3;
    int m[s][s];
    int n[s][s];
    
    for (int i = 0; i < s; i++) {
        for (int j = 0; j < s; j++) {
            scanf("%d", &m[i][j]);
            n[j][i] = m[i][j];
        }
    }
    
    for (int i = 0; i < s; i++) {
        for (int j = 0; j < s; j++) {
            printf("%d ", n[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}