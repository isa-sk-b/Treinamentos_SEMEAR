#include<stdio.h>
#include<stdlib.h>

int main () {
    int num, soma;
    soma=0;
    while(1){
        printf("Digite um numero: ");
        scanf("%d",&num);
        if(num<0) break;
        soma = soma + num;
    }
    printf("A soma dos numeros positivos e: %d\n",soma);
    printf("Fim do programa!");
    return 0;
}
