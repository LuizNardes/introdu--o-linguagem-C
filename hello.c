#include <stdio.h>

int main()
{
    /*    
    //Definindo as variáveis e atribuindo valores a elas
    int minhaIdade = 25;
    int maeIdade = 40;
    int paiIdade = 45;
    int irmaoIdade = 15;

    int idadeTotal;

    idadeTotal = minhaIdade + maeIdade + paiIdade + irmaoIdade;

    printf("%i", idadeTotal);
    


   //--------------------------------------------------   AULA 7

   int base;
   int altura;
   int area;

   printf ("Digite o valor da base:");
   scanf("%i", &base);

   printf ("Digite o valor da altura:");
   scanf("%i", &altura );

   area = base * altura;

   printf("A area total e igual %i\n", area);
   
   //-------------------------------------------------- FIM AULA 7

   
   //-------------------------------------------------- AULA 22
    int nota[5];

    nota[0] = 10;
    nota[1] = 5;
    nota[2] = 4;
    nota[3] = 2;
    nota[4] = 7;

    printf("%i\n",nota[3]);


    //------------------------------------------------- FIM AULA 22

  
    //-------------------------------------------------- AULA 23
    int vetor[5];
    
    for (int i=0; i<5; ++i){
        printf("%i",vetor[i]);
    };



    //------------------------------------------------- FIM AULA 23



    //-------------------------------------------------- AULA 24
    float notas[5] = {0};
    float total = 0;
    float media = 0;

   printf("Insira 5 notas:\n");

   for (int i = 0; i < 5; ++i){
       scanf("%f", &notas[i]);
       total += notas[i];
   }       

   media = total / 5;

   printf("A media do aluno e %f", media);


    //------------------------------------------------- FIM AULA 24




   //-------------------------------------------------- Atividade 1

   int varX;
   int varY;
   int varZ;

    printf("Digite o primeiro valor: ");
    scanf("%i", &varX);

    printf("Digite o segundo valor: ");
    scanf("%i", &varY);    

    printf("A ordem digitada: %i ---- %i\n",varX,varY);
    
    varZ = varX;
    varX = varY;
    varY = varZ;

    printf("A ordem invertida da digitada e digitada: %i ---- %i\n",varX,varY);
   
    //-------------------------------------------------- fim Atividade 1

     */

    //-------------------------------------------------- Atividade 1

    int vetor[5];
    int maior;
    int menor;
    int contador = 1;


    for (int i = 0; i < 5; ++i){

        scanf("%i ", &vetor[i]);

        if(vetor[i] < menor){
            menor = vetor[i];
        }

        if(vetor[i] > maior){
            maior = vetor[i];
        }

        ++contador;
    }
    printf("Tamanho do vetor: %i\n",contador);
    for (int i = 0; i < 5; ++i){
        printf("%i ",vetor[i]);
    }
    printf("\n");
    printf("Maior: %i\n",maior);
    printf("Menor: %i",menor);

    //-------------------------------------------------- fim Atividade 2

    return 0;
}
