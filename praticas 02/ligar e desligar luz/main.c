#include <stdio.h>

int main() {
    int estadoUm, estadoDois;
    scanf("%d %d", &estadoUm, &estadoDois);
    
    if (estadoUm == 0 && estadoDois == 0) {
        printf("Desligada");
    } else if (estadoUm == 1 && estadoDois == 1) {
        printf("Desligada");
    } else {
        printf("Ligada");
    }
}