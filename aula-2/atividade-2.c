#include <stdio.h> 
 
void imprimir (int maior1, int menor1) { 
    if (maior1 < menor1) { 
        printf("\nNão é possivel continuar, final do processamento..."); 
        return; 
    } else { 
        printf("%d ", maior1); 
        return imprimir(maior1-1, menor1); 
    } 
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
    imprimir(maior, menor); 
} 