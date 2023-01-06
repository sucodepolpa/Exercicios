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
