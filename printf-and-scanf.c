//1.  (PT-BR) Faça um programa simples que leia dois inteiros via teclado (com somente um scanf) e imprima sua soma.
// (ENG) Create a simple program that reads two integers via user input (using only one scanf) and prints out their sum.

// RESULT:
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

//2. (PT-BR) Escreva um programa que pergunte ao usuário seu nome, idade e letra favorita do alfabeto. Imprima uma única frase contendo todas as informações.
// (ENG) Write a program that asks the user their name, age, and favorite letter of the alphabet. Print a single sentence containing all the information.

//RESULT:
