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

//Dados um numero inteiro n>0, e um dıgito d (0<=d<=9), determinar quantas vezes d ocorre em n. Por exemplo, 3
//ocorre 2 vezes em 63453.
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    //
    int num1, num2, count, resto, n;
    //
    printf("digite um numero inteiro maior que 0: ");
    scanf("%d", &n);
    printf("agora digite um numero inteiro maior ou igual a 0 e menor ou igual a 9: ");
    scanf("%d", &num2);
    count = 0;
    num1 = n;
    while(num1 > 0)
    {
        resto = num1 % 10;
        num1 = num1 / 10;
    }
    
    if(resto == num2)
    {
        count++;
    }
    printf("o numero %d aparece %d vezes em %d.\n", num2, count, n);
    return 0;
}

// Dado um inteiro n>0, calcular a soma dos divisores positivos de n.

#include <stdio.h>

int main(void)
{
    //
    int num;
    int soma = 0;
    int i = 1;
    //
    printf("digite um numero: ");
    scanf("%d", &num);
    while(i != num)
    {
        if ((num % i) != 0)
        {
            i++;
        }
        else
        {
            soma = soma + i;
            i++;
        }
    }

    printf("a soma dos divisores de %d, sem contar ele mesmo, eh %d.\n", num, soma);
    return 0;
}

// Um matematico italiano da idade media conseguiu modelar o ritmo de crescimento da populacao de
// coelhos atraves de uma sequencia de numeros naturais que passou a ser conhecida como sequencia de Fibonacci. Faca um programa que, dado n>0, calcula Fn.
#include <stdio.h>

int main(void)
{
    //
    int n; // numero digitado
    int count = 3; // contador de n
    int fant = 1; // valor anterior de F a partir da terceira posicao na sequencia de fibonacci
    int fatu = 1; // valor atual de F na terceira posicao na sequencia de fibonacci
    int res = 0; // resultado de F
    //
    printf("digite um numero inteiro maior que zero: ");
    scanf("%d", &n);
    if(n <= 2){
        res = 1;
    }
    else{
        while(count <= n){
            res = fatu + fant;
            fant = fatu;
            fatu = res;
            count++;
        }
    }
    printf("na sequencia de fibonacci, a posicao %d corresponde ao numero %d.\n", n, res);
    return 0;
}
