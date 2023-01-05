//Dados n e dois números inteiros positivos i e j diferentes de 0,
//imprimir em ordem crescente os n primeiros naturais que são múltiplos de i ou de j e ou de ambos.

#include <stdio.h>

int main(void)
{
    //
    int n, i, j, count, count2; //count é o contador dos dois inteiros, count2 é o contador de n
    //
    printf("digite um numero inteiro maior que zero: ");
    scanf("%d", &n);
    printf("agora digite dois numeros inteiros maiores que zero: ");
    scanf("%d %d", &i, &j);
    count = 0; count2 = 0;
    while (count2 < n){
        if(count % i == 0 || count % j ==0){
            printf("%d\n", count);
            count2 = count2 + 1;
        }
        count = count + 1;
    }
    return 0;
}
