#include <stdio.h>

// Responsabilidade 1: Cálculo de salário
float calcularSalario(float horas, float valorHora) {
    return horas * valorHora;
}

// Responsabilidade 2: Impressão do salário
void imprimirSalario(float salario) {
    printf("Salário calculado: R$ %.2f\n", salario);
}

int main() {
    float horas = 40;
    float valorHora = 25.0;

    float salario = calcularSalario(horas, valorHora);
    imprimirSalario(salario);

    return 0;
}