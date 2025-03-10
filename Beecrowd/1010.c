#include <stdio.h>

int main(){
    int cod1, cod2, un1, un2;
    float preco1, preco2;

    scanf("%d %d %f", &cod1, &un1, &preco1);
    scanf("%d %d %f", &cod2, &un2, &preco2);
    printf("VALOR A PAGAR: R$ %.2f\n", (un1*preco1) + (un2*preco2));

    return 0;
}