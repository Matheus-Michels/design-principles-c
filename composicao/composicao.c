#include <stdio.h>
#include <string.h>

// Componente: Módulo de log
typedef struct {
    void (*registrar)(const char* mensagem);
} Logger;

void logConsole(const char* mensagem) {
    printf("[LOG] %s\n", mensagem);
}

// Componente: Módulo de cálculo
typedef struct {
    Logger logger;
    float (*calcularMedia)(float* valores, int tamanho);
} Calculadora;

float mediaSimples(float* valores, int tamanho) {
    float soma = 0;
    for (int i = 0; i < tamanho; i++) {
        soma += valores[i];
    }
    return soma / tamanho;
}

// Função de uso da calculadora com logger
void usarCalculadora(Calculadora* calc, float* valores, int tamanho) {
    float resultado = calc->calcularMedia(valores, tamanho);
    char mensagem[100];
    snprintf(mensagem, sizeof(mensagem), "Média calculada: %.2f", resultado);
    calc->logger.registrar(mensagem);
}

int main() {
    Logger loggerConsole = { logConsole };
    Calculadora calc = { loggerConsole, mediaSimples };

    float valores[] = { 7.5, 8.0, 9.0 };
    usarCalculadora(&calc, valores, 3);

    return 0;
}
