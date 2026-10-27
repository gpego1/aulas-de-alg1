#include <stdio.h>

int main()
{
	int n;
	scanf("%d", &n);
	int vect[n];

	if (n < 1 || n > 10) {
		printf("Entrada inválida");
		return 0;
	}

	for (int i =0; i < n; i++) {
		scanf("%d", &vect[i]);
	}

	printf("Vetor original: ");
	for (int i =0; i < n; i++) {
		printf("%d ", vect[i]);
	}
	printf("\n");

	printf("Vetor resultante: ");
	for (int i = n  -1; i >= 0; i--) {
		printf("%d ", vect[i] -1);
	}


	return 0;
}