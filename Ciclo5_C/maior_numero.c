#include<stdio.h>
#include<string.h>

int main() {
    int i=0;
    float num1,num2,maior_num;

    printf("\nDigite o primeiro numero: ");
    scanf("%f",&num1);
    printf("\nDigite o segundo numero: ");
    scanf("%f",&num2);
    if(num1>num2) maior_num = num1;
    else maior_num = num2;
    printf("\nO maior numero e: %.2f \n",maior_num);
    return 0;
}

