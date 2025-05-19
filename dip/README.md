# DIP - Dependency Inversion Principle

## O que é?

O Princípio da Inversão de Dependência afirma que **módulos de alto nível não devem depender de módulos de baixo nível**, mas sim de **abstrações** (interfaces).

## Para que serve?

Esse princípio permite que o código de alto nível (ex: regras de negócio) funcione independentemente dos detalhes (ex: sensores, arquivos, banco de dados). Isso facilita testes, manutenção e mudanças no sistema.

## Exemplo em C

No exemplo [`dip.c`](./dip.c), criamos um tipo `LeitorDados`, que funciona como uma interface. Ele define a função `lerDados`, mas a lógica pode vir de um sensor, de um arquivo ou de qualquer outra fonte.

- `processarLeitura` é a parte de **alto nível**, que só depende da abstração.
- `lerDeSensor` e `lerDeArquivo` são implementações concretas de **baixo nível**.

### Problema resolvido:

Se quisermos mudar a origem dos dados (de sensor para arquivo, banco, rede etc), não precisamos modificar a função `processarLeitura`. Basta trocar a função concreta atribuída à interface.

### Código: [`dip.c`](./dip.c)

### Como compilar e rodar:

```bash
gcc dip.c -o dip
./dip
