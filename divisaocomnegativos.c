#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int dividendo, divisor, quociente, resto;

    printf("Digite o dividendo: ");
    scanf("%d", &dividendo);
    printf("Digite o divisor: ");
    scanf("%d", &divisor);
    
    if (divisor == 0)
    {
        printf("Não existe divisão por zero\n");
    }
    quociente = dividendo / divisor;
    resto = dividendo % divisor;

    printf("Quociente: %d\n", quociente);
    printf("Resto: %d\n", resto);

    printf("Criado por [SEU NOME]\n");

    printf("Criado por Sofia Araújon Piton");
}