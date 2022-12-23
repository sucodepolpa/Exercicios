//1.  (PT-BR) Faça um programa simples que leia dois inteiros via teclado (com somente um scanf) e imprima sua soma.
// (ENG) Create a simple program that reads two integers via user input (using only one scanf) and prints out their sum.

// RESULTADO:
#include <stdio.h>

int main(void)
{
    int idade = 0;
    int altura = 0;
    int soma = 0;
    printf("qual sua idade e altura em cm? ");
    scanf("%d, %d", &idade, &altura);
    soma = idade + altura;
    printf("a soma da sua idade e altura é: %d\n", soma);
    return 0;
}
