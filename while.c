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

// Dados dois naturais n>0 e m>0, determinar entre todos os pares de numeros inteiros (x,y) tais que
// 0 ≤ x ≤ n e 0 ≤ y ≤ m, um par para o qual o valor da expressao x × y − x2 + y seja maximo e calcular tambem este maximo.

#include <stdio.h>

int main() {
  //
  int n, m, x, y, v;
  int max = 0, max_x = 0, max_y = 0;
  //
  printf("digite um numero natural maior que 0: ");
  scanf("%d", &n);
  printf("digite outro numero natural maior que 0: ");
  scanf("%d", &m);
  x=0;
  while(x <= n){
    y=0;
    while (y <= m){
      v = x*y - (x*x) + y;
      if(v > max){
        max = v;
        max_x = x;
        max_y = y;
      }
      y++;
    }
    x++;
  }
  printf("O valor maximo = %d em x = %d e y = %d\n" , max , max_x , max_y);
  return 0;
}

// Dados o número n de alunos de uma turma de Introdução aos Autômatos a Pilha (MAC 414)
// e suas notas da primeira prova, determinar a maior e a menor nota obtidas por essa turma (Nota máxima = 100 e nota mínima = 0).

#include <stdio.h>
int main(){
    //
    int i = 1, n, x = 1, nota, maiornota = 0, menornota = 100;
    //
    printf("digite a quantidade de alunos da turma MAC414: ");
    scanf("%d", &n);
    while (i <= n){
        printf("digite a nota do aluno %d na prova 1: ", x);
        scanf("%d", &nota);
        if(maiornota <= nota){
            maiornota = nota;
        }

        else{
            ;
        }
        if(menornota > nota){
            menornota = nota;
        }
        if(menornota < nota){
            ;
        }
        x++;
        i++;
    }
    printf("a maior nota obtida na turma foi %d. a menor nota obtida na turma foi %d.\n", maiornota, menornota);
    return 0;
}

// Dados n e uma seqüência de n números inteiros, determinar a soma dos números pares.
#include <stdio.h>
int main(){
    //
    int n, seq, i = 1, soma = 0;
    //
    printf("digite um numero inteiro maior que zero: ");
    scanf("%d", &n);
    while(i <= n){
        printf("digite o %d numero de uma sequencia de %d numeros: ", i, n);
        scanf("%d", &seq);
        if(seq % 2 == 0){
            soma = soma + seq;
            i++;
        }
        else{
            i++;
        }
    }
    printf("a soma dos numeros pares da sequencia resulta em %d.\n", soma);
    return 0;
}
