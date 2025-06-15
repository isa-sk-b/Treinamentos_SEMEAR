#include<string.h>
#include<stdio.h>
#include<stdlib.h>
#define MAX_TAM 100

int main () {
    int i=0; 
    char string[MAX_TAM]; 
    fflush(stdin);
    printf("Digite um texto:"); 
    fgets(string,sizeof(string),stdin);
    while(string[i]!='\0') {
        if(string[i]=='\n') string[i]='\0';
        i++;
    } 
    printf("\nVoce digitou: %s\n",string); 
    return 0; 
}




