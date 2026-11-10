#include <stdio.h>

int main() {
    char string[100];
    int caracteres = 0;
    
    scanf(" %99[^\n]", string);

    for (int i = 0; string[i] != '\0'; i++) {
        caracteres++;
    }

    printf("A string digitada tem %d caracteres\n", caracteres);

    return 0;
}