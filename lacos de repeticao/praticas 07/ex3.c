#include <stdio.h>

int main() {
    int value;
    int i = 1;
   
    while(i < 11) {
        scanf("%d", &value);
        if(value <= 2 || value >= 1000) {
            printf("Valor invalido! Tente novamente!\n");
            continue;
        }
        
        printf("%d X %d = %d \n", i, value, i * value);
        i++;
    }
    return 0;
}