#include <stdio.h>

int main (){
    double n, A, raio;
    n = 3.14159;

    scanf("%lf", &raio);
    A = (raio*raio) * n;
    printf("A=%.4lf\n", A);

    return 0;
}