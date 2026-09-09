#include <stdio.h>

int main() {
    double s1, s2, s3;
    scanf("%lf %lf %lf", &s1, &s2, &s3);
    
    if (s1 > s2 && s1 > s3) {
        printf("Maior Salario: R$ %.2lf", s1);
    } else if (s2 > s1 && s2 > s3) {
        printf("Maior Salario: R$ %.2lf", s2);
    } else if (s3 > s1 && s3 > s2) {
        printf("Maior Salario: R$ %.2lf", s3);
    } else if (s3 == s2 && s3 > s1) {
        printf("Maior Salario: R$ %.2lf", s3);
    } else if (s1 == s2 && s1 > s3) {
         printf("Maior Salario: R$ %.2lf", s1);
    } else if (s3 == s1 && s3 == s2) {
         printf("Maior Salario: R$ %.2lf", s3);
    }
    
    return 0;
}