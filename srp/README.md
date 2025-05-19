# SRP - Single Responsibility Principle

## O que é?

O Princípio da Responsabilidade Única diz que uma função ou módulo deve ter **apenas um motivo para mudar**, ou seja, **uma única responsabilidade**.

## Para que serve?

Serve para manter o código mais limpo, mais fácil de manter e de testar. Cada parte do código tem uma função clara e isolada.

## Exemplo em C

No exemplo [`srp.c`](./srp.c), a função `calcularSalario` faz apenas o cálculo e a função `imprimirSalario` apenas imprime. Isso evita que alterações em uma parte afetem a outra.

### Problema resolvido:

Se precisarmos mudar a forma de imprimir (ex: salvar em arquivo), não alteramos a lógica de cálculo.

### Código: [`srp.c`](./srp.c)

### Como compilar e rodar:

```bash
gcc srp.c -o srp
./srp