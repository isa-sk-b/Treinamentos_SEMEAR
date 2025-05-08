#include<stdlib.h>
#include<stdio.h>
#include<math.h>

int main () {
    int v[10];
    int i=0;

    while(i<10) {
        scanf("%d",&v[i]);
        i++;
    }

    i=0;
    int pares,impares;
    pares=0,impares=0;
    while(i<10) {
        if(v[i]%2==0) pares++;
        else impares++;
        i++;
    }

    printf("Quantidade de numeros pares: %d\n",pares);
    printf("Quantidade de numeros impares: %d\n",impares);

    return 0;
}
