#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int i, j;
    double m[n][n];

    
    for(i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%lf", &m[i][j]);  
            printf("%.1lf ", m[i][j] * 2);
        }
        printf("\n");
    }
    
    
    
    return 0;
}