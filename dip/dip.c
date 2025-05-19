#include <stdio.h>

// Interface genérica: fonte de dados
typedef struct {
    void (*lerDados)(char* buffer, int tamanho);
} LeitorDados;

// Implementação concreta 1: leitura de sensor
void lerDeSensor(char* buffer, int tamanho) {
    snprintf(buffer, tamanho, "Leitura do sensor: 23.5°C");
}

// Implementação concreta 2: leitura de arquivo
void lerDeArquivo(char* buffer, int tamanho) {
    snprintf(buffer, tamanho, "Leitura do arquivo: 25.8°C");
}

// Módulo de alto nível que depende da abstração (interface)
void processarLeitura(LeitorDados leitor) {
    char dados[100];
    leitor.lerDados(dados, sizeof(dados));
    printf("Processando dados: %s\n", dados);
}

int main() {
    // Cria fonte de leitura via sensor
    LeitorDados leitorSensor = { lerDeSensor };

    // Cria fonte de leitura via arquivo
    LeitorDados leitorArquivo = { lerDeArquivo };

    printf("Usando sensor:\n");
    processarLeitura(leitorSensor);

    printf("\nUsando arquivo:\n");
    processarLeitura(leitorArquivo);

    return 0;
}
