# OCP – Open-Closed Principle (Princípio Aberto-Fechado)

## O que é?

O Princípio Aberto-Fechado diz que módulos devem ser **abertos para extensão**, mas **fechados para modificação**.

## Para que serve?

Permite adicionar novos comportamentos sem alterar o código existente, reduzindo erros e facilitando a manutenção.

## Exemplo em C

Neste exemplo, temos uma função `gerarRelatorio()` que recebe como parâmetro uma função do tipo `ImpressoraRelatorio`. Criamos duas implementações:

- `imprimirSimples`: imprime um relatório com formatação básica.
- `imprimirCSV`: imprime o relatório em formato CSV.

### Problema resolvido:

Evita if ou switch para cada tipo de impressão, tornando o código mais modular, limpo e seguro.

### Código: [`ocp.c`](./ocp.c)

### Como compilar e rodar:

```bash
gcc ocp.c -o ocp
./ocp