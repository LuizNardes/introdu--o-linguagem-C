#include <stdio.h> 
 
int soma1aN (int menor1) { 
    if (menor1 == 1) { 
        return 1; 
    } 
    return menor1 + soma1aN(menor1-1); 
} 
 
void main (void) { 
    int tamanho; 
    int maior = 0; 
    int menor = 0; 
    int vetor[10]; 
 
    printf("Digite o tamanho do vetor (máx 10 elementos)\n"); 
    scanf("%d", &tamanho); 
    for (int i = 0; i < tamanho; i++) { 
        printf("Digite o elemento %d do vetor: ", i); 
        scanf("%d", &vetor[i]); 
    } 
    menor = vetor[0]; 
    maior = vetor[0]; 
    for (int i = 0; i < tamanho; i++) { 
        if (vetor[i] > maior) maior = vetor[i]; 
        if (vetor[i] < menor) menor = vetor[i]; 
    } 
    printf("O maior elemento do vetor é: %d\n", maior); 
    printf("O menor elemento do vetor é: %d\n", menor); 
    int resp = soma1aN(menor); 
    printf("A soma dos números entre 0 e %d é: %d \n", menor, resp ); 
} 
