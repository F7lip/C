#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int A, B, soma;

    printf("Digite o primeiro numero: ");
    scanf("%i", &A);

    printf("Digite o segundo numero: ");
    scanf("%i", &B);

    soma= A+B ;
    printf("A soma de %i com %i nos dara %i", A, B , soma);


    return 0;
}

