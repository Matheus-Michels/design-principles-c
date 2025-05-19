# Composição ao invés de Herança

## O que é?

Esse princípio sugere que, ao invés de estender uma classe (herança), devemos **combinar objetos menores com responsabilidades específicas** (composição). Assim, os comportamentos podem ser reutilizados e substituídos de forma mais flexível.

## Para que serve?

Composição permite:

- Reutilizar funcionalidades sem criar hierarquias complexas
- Substituir comportamentos sem afetar o restante do código
- Aumentar a modularidade e flexibilidade

## Exemplo em C

No exemplo [`composicao.c`](./composicao.c), temos:

- Um módulo `Logger`, responsável apenas por registrar mensagens.
- Uma `Calculadora`, que **usa** um `Logger` e um método de cálculo (composição).
- A função `usarCalculadora` calcula a média e registra com o `Logger`.

### Problema resolvido:

Se quisermos trocar o logger para um que escreve em arquivo, basta substituir o ponteiro `logger.registrar`. A `Calculadora` não precisa ser alterada.

### Código: [`composicao.c`](./composicao.c)

### Como compilar e rodar:

```bash
gcc composicao.c -o composicao
./composicao
