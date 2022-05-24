#include <stdio.h>

int main()
{
    int vetor[5];
    int vetor2[5];
    int maior;
    int menor;



    for (int i = 0; i < 5; ++i){

        scanf("%i ", &vetor[i]);
    }

     for (int i = 0; i < 5; ++i){
        vetor2[i] = vetor[i];    
    }

     printf("vetor1: ");
    for (int i = 0; i < 5; ++i){
        printf("%i ",vetor[i]);
    }
       printf("vetor2: ");
      for (int i = 0; i < 5; ++i){
       
        printf("%i ",vetor2[i]);
    }



    return 0;
}
