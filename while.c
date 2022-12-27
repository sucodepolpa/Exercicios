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

