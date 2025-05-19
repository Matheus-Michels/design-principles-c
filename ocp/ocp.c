#include <stdio.h>

// Tipo de função para imprimir relatório
typedef void (*ImpressoraRelatorio)(const char* titulo, const char* conteudo);

// Implementação 1: Impressão simples
void imprimirSimples(const char* titulo, const char* conteudo) {
    printf("=== %s ===\n", titulo);
    printf("%s\n", conteudo);
}

// Implementação 2: Impressão CSV
void imprimirCSV(const char* titulo, const char* conteudo) {
    printf("\"%s\",\"%s\"\n", titulo, conteudo);
}

// Função principal que utiliza uma "interface" de impressão
void gerarRelatorio(const char* titulo, const char* conteudo, ImpressoraRelatorio impressora) {
    impressora(titulo, conteudo);
}

int main() {
    const char* titulo = "Relatório de Vendas";
    const char* conteudo = "Total: R$ 5000";

    printf("Impressão simples:\n");
    gerarRelatorio(titulo, conteudo, imprimirSimples);

    printf("\nImpressão CSV:\n");
    gerarRelatorio(titulo, conteudo, imprimirCSV);

    return 0;
}
