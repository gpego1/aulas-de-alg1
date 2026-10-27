#include <stdio.h>

int main()
{
    int nAlunos = 5;
    double aval1[nAlunos];
    double aval2[nAlunos];
    double aval3[nAlunos];
    double sum = 0.0;
    double media[nAlunos];
    int maiorMedia = 0;
    
    
    for (int i = 0; i < nAlunos; i++) {
        scanf("%lf", &aval1[i]);
        sum += aval1[i];
    }
    
    for (int i = 0; i < nAlunos; i++) {
        scanf("%lf", &aval2[i]);
        sum += aval2[i];
    }
    
    for (int i = 0; i < nAlunos; i++) {
        scanf("%lf", &aval3[i]);
        sum += aval3[i];
    }
    
    for (int i =0; i < nAlunos; i++) {
        media[i] = (aval1[i] + aval2[i] + aval3[i])/3;
    }
    
    for (int i = 1; i < nAlunos; i++) {
        if (media[maiorMedia] < media[i]) {
            maiorMedia = i;
        }
    }
    
    printf("Medias: ");
    for (int i = 0; i < nAlunos; i++) {
        printf("%.2lf ", media[i]);
    }
    printf("\n");
    
    printf("Estudante com maior média: %d \n", maiorMedia + 1);
    printf("Media geral da turma: %.2lf ", sum/15);
    
    return 0;
}