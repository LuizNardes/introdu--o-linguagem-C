#include <stdio.h>

int main()
{
    //Declaração das variaveis
   int varX;
   int varY;
   int varZ;

    //Solicita ao usuario o primeiro valor
    printf("Digite o primeiro valor: ");
    //registra o primeiro valor 
    scanf("%i", &varX);

    //Solicita ao usuario o segundo valor
    printf("Digite o segundo valor: ");
    //registra o primeiro valor 
    scanf("%i", &varY);    

    //Imprime da tela a ordem digitada
    printf("A ordem digitada: %i ---- %i\n",varX,varY);
    
    //Inverte os valores usando a variavel Z como variavel "temporária"
    varZ = varX;
    varX = varY;
    varY = varZ;

    //Imprime da tela a ordem invertida
    printf("A ordem invertida da digitada e digitada: %i ---- %i\n",varX,varY);



    return 0;
}
