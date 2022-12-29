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

//3. Dados um numero inteiro n > 0 e uma sequencia com n numeros inteiros, determinar a soma dos inteiros positivos
// da sequencia. Por exemplo, para n = 7 e para a sequencia com n = 7 numeros inteiros: 6, − 2, 7, 0, − 5, 8, 4.
// o seu programa deve escrever o numero 25.
#include <stdio.h>

int main(void)
{
    //dec
    int n, soma = 0, num;
    //prog
    printf("Digite uma sequencia de numeros inteiros iniciada por um numero positivo.\n");
    printf("Digite a quantidade de numeros da sequencia: ");
    scanf("%d", &n);

    while(n > 0)
    {
        printf("Digite um numero: ");
        scanf("%d", &num);
    }

    if(num > 0)
    {
        soma = soma + num;
    }

    printf("A soma dos numeros positivos digitados é %d.\n", soma);
    return 0;
}
