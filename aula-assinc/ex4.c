#include <stdio.h>

int main()
{
	int vect[8];
	int negativos  = 0;
	int pares = 0;
	int bottom = 0;
	
	for (int i = 0; i < 8; i++) {
	    scanf("%d", &vect[i]);
	    
	    if (vect[i] < 0) negativos += 1;
	 
	    if (vect[i] % 2 == 0) pares += 1;
	}
	
	for (int i = 1; i < 8; i++) {
	    if (vect[bottom] < vect[i]) {
	        bottom = i;
	    }
	}
	
	printf("Quantidade de negativos: %d \n", negativos);
	printf("Quantidade de pares: %d \n", pares);
	printf("Maior elemento: %d \n", vect[bottom]);
	printf("Posicao da primeira occorrencia: %d \n", bottom + 1);
	printf("Vetor: ");
	for (int i = 0; i < 8; i++) {
	   printf("%d ", vect[i]);
	}
	printf("\n");
	
	


	return 0;
}