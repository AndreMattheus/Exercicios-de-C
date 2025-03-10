#include <stdio.h>

int main(){
    int num, horas;
    float salario;

    scanf("%d %d %f", &num, &horas, &salario);
    printf("NUMBER = %d\n", num);
    printf("SALARY = U$ %.2f\n", horas * salario);

    return 0;
}