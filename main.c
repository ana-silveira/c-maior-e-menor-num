/*
53. Fazer um programa para ler números inteiros e ao final mostrar o maior e o
menor número lido. FLAG será NRO = “-1”.
*/


#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main()
 {
    setlocale (LC_ALL, "Portuguese");

    int numero;
    int maiorNumero = 0;
    int menorNumero = 0;

    printf("Informe um número: ");
    scanf("%d", &numero);

    while ( numero != -1 ){

        if (numero < menorNumero) {
            menorNumero = numero;
        }

        if (numero > maiorNumero) {
            maiorNumero = numero;
        }


        printf("Informe o próximo número: ");
        scanf("%d", &numero);
    }

    printf("O menor número digitado é %d. \n", menorNumero);
    printf("O maior número digitado é %d.", maiorNumero);

}
