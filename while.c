//(PT-BR) Dado um numero inteiro diferente de zero, imprima o quadrado deste numero.
//(ENG) Given a non-zero integer, print the square of this number.

//RESULT:
#include <stdio.h>

int main(void)
{
//declaracoes
    int num;
    int quad = 0;
//programa
    printf("digite um numero: ");
    scanf("%d", &num);

    while (num != 0)
    {
        quad = num * num;
        printf("o quadrado do numero digitado é %d. digite outro numero: ", quad);
        scanf("%d", &num);

    }

    return 0;
}
//2. (PT-BR) Dada uma sequencia de numeros inteiros diferentes de zero, terminada por zero, calcule a somatoria dos numeros da sequencia. 
//(ENG) Given a sequence of integers different from zero, terminated by zero, calculate the sum of the numbers in the sequence.

//RESULT:
#include <stdio.h>

int main(void)
{
    // declaracoes
    int num;
    int soma = 0;
    // programa
    printf("Digite o primeiro numero de uma sequencia de numeros inteiros diferentes de zero, terminada por zero: ");
    scanf("%d", &num);

    while(num != 0)
    {
        soma = num + soma;
        printf("digite o proximo numero da sequencia: ");
        scanf("%d", &num);
    }
    printf("a soma da sequencia é %d.\n", soma);
    return 0;
}

//Dada uma sequencia de numeros inteiros diferentes de zero, terminada por um zero, calcular a sua soma.

#include <stdio.h>

int main(void)
{
    //
    int qtd, num;
    int soma = 0;
    //
    printf("digite a quantidade de numeros da sua sequencia, contando o zero: ");
    scanf("%d", &qtd);
        while (qtd > 0)
        {
            printf("digite um numero (lembre-se que sua sequencia deve terminar com um 0): ");
            scanf("%d", &num);
            qtd--;
            soma = soma + num;
        }
    printf("o resultado da soma dos numeros da sequencia eh %d.\n", soma);
    return 0;
}

// Dado um numero inteiro n>0, determinar a soma dos dıgitos de n. Por exemplo, a soma dos dıgitos de 63453 eh 21.

#include <stdio.h>

int main(void)
{
    //
    int num, div, soma = 0;
    //
    printf("digite um numero: ");
    scanf("%d", &num);
    while (num != 0)
    {
        div = num % 10;
        soma = soma + div;
        num = num / 10;
    }
    printf("o resultado da soma dos digitos do numero eh %d.\n", soma);
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

// Dado um numero inteiro n>=0, determinar o seu fatorial.

#include <stdio.h>

int main(void)
{
    //
    int num;
    int i = 1;
    int fat = 1;
    //
    printf("digite um numero inteiro maior ou igual a zero: ");
    scanf("%d", &num);
    while (i <= num)
    {
        if (num == 0)
        {
            fat = 1 * 1;
        }
        fat = i * fat;
        i++;
    }
    printf("o fatorial de %d eh %d.\n", num, fat);
    return 0;
}

// Exercıcio: Dados dois inteiros x e n>0, calcular x elevado a n.

#include <stdio.h>

int main(void)
{
    //
    int x, n, res, c; //res para resultado e c para cumulativo
    int i = 1;
    //
    printf("digite um numero inteiro: ");
    scanf("%d", &x);
    printf("agora digite um numero inteiro maior do que zero: ");
    scanf("%d", &n);
    c = x;
    while (i < n)
    {
        c = c * x;
        i++;
    }
    res = c;
    printf("%d elevado a %d eh %d.\n", x, n, res);
    return 0;
}

// Dado um numero inteiro positivo n, calcular a soma dos n primeiros numeros naturais.
#include <stdio.h>

int main(void)
{
    //
    int n;
    int soma = 0;
    int i = 0;
    int j = 0;
    //
    printf("digite um numero inteiro positivo: ");
    scanf("%d", &n);
    while (i < n)
    {
        soma = soma + j;
        j++;
        i++;
    }
    printf("a soma dos %d primeiros numeros naturais eh %d.\n", n, soma);
    return 0;
}
