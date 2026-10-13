#include <stdio.h>

int main() {
    int entrada = 0;
    int contadorMary = 0;
    int contadorJoe = 0;
    int contadorNulo = 0;
    int contadorBranco = 0;
    int totalVotos = 0;
    
    while (1) {
        scanf("%d", &entrada);
        
         if (entrada == 0) {
            break;
        }
        
         if (entrada != 1 && entrada != 2 && entrada != 3 && entrada != 4) {
            printf("Codigo invalido! Tente novamente. \n");
        }
        
        if (entrada == 1) {
            contadorMary++;
            totalVotos++;
        } 
        
        if (entrada == 2) {
            contadorJoe++;
            totalVotos++;
        } 
        
        if (entrada == 3) {
            contadorNulo++;
            totalVotos++;
        } 
        
        if (entrada == 4) {
            contadorBranco++;
            totalVotos++;
        }
    }

    printf("Total de votos.............: %d \n", totalVotos);
    printf("Total de votos 1 - Mary....: %d \n", contadorMary);
    printf("Total de votos 2 - Joe.....: %d \n", contadorJoe);
    printf("Total de votos 3 - nulos...: %d \n", contadorNulo);
    printf("Total de votos 4 - brancos.: %d \n", contadorBranco);
    
    return 0;
}