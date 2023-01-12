//Dado um inteiro p>1, verificar se p eh primo

#include <stdio.h>

int main(void)
{
    //
    int num, div;
    int count = 0; // armazena o numero de divisores de num
    //
    printf("digite um numero inteiro maior que 1 para saber se ele eh primo: ");
    scanf("%d", &num);
    for(div = 1; div <= num; div++){
        if(num % div == 0){
            count++;
        }
    }
    if(count == 2){
        printf("%d eh um numero primo.\n", num);
    }
    else{
        printf("%d nao eh um numero primo.\n", num);
    }
    return 0;
}

// Dizemos que um numero eh triangular se ele eh produto de tres numeros naturais consecutivos (e.g.: 120 eh
// triangular pois 120 = 4 × 5 × 6). Dado um natural n>0, determinar se n eh triangular.
#include <stdio.h>

int main(){
  // inicializacoes
  int num, x = 1;
  // programa
  printf("digite um numero inteiro maior que zero: ");
  scanf("%d", &num);
  for(x = 1; x * (x + 1) * (x + 2) < num; x++);
  if(x * (x + 1) * (x + 2) == num){
    printf("%d eh triangular (produto de %d*%d*%d).\n", num, x, x+1, x+2);
  }
  else{
    printf("%d nao eh triangular.\n", num);
  }
  return 0;
}
