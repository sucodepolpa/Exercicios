//1. Escreva um programa em C que leia um numero inteiro e devolva seu valor absoluto
#include <stdio.h>

int main(void)
{
    // declaracoes
    int num;
    // programa
    printf("Digite um numero inteiro para saber seu valor absoluto: ");
    scanf("%d", &num);

    if(num < 0)
    {
        num = -num;
    }
     printf("O valor absoluto do numero digitado é %d.\n", num);
    return 0;
}

//2. Escreva um programa em C que leia dois numeros inteiros e imprima o maior.
#include <stdio.h>

int main(void)
{
    //dec
    int num1, num2, maior;
    //prog
    printf("Digite dois numeros inteiros: ");
    scanf("%d %d", &num1, &num2);

    if(num1 > num2)
    {
        maior = num1;
    }

    else;
    {
        maior = num2;
    }
    printf("O maior numero é %d.\n", maior);
    return 0;
}

//3.
