//Dado um inteiro p>1, verificar se p eh primo

#include <stdio.h>

int main(void)
{
    //
    int num, div;
    int cont = 0; // armazena o numero de divisores de num
    //
    printf("digite um numero inteiro maior que 1 para saber se ele eh primo: ");
    scanf("%d", &num);
    for(div = 1; div <= num; div++){
        if(num % div == 0){
            cont++;
        }
    }
    if(cont == 2){
        printf("%d eh um numero primo.\n", num);
    }
    else{
        printf("%d nao eh um numero primo.\n", num);
    }
    return 0;
}
