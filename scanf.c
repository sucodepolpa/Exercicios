//1.  faca um programa simples que leia dois inteiros via teclado (com somente um scanf) e imprima sua soma.
// RESOLUCAO 1:

#include <stdio.h>

int main(void)
{
    int idade, altura;
    int soma;
    soma = idade + altura;
    printf("qual sua idade e altura em cm? ");
    scanf("%d %d", idade, altura);
    printf("a soma da sua idade e altura é: %d", soma);
    return 0;
}

// RESOLUCAO 2:

#include <stdio.h>

int main(void)
{
    int idade, altura;
    int soma;
    soma = idade + altura;
    printf("qual sua idade? ");
    scanf("%d", idade);
    printf("qual sua altura em cm? ");
    scanf("%d", altura);
    printf("a soma da sua idade e altura é: %d", soma);
    return 0;
}
