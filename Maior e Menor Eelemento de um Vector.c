#include <stdio.h>
#include <stdlib.h>
#define TAM_MAX 15

int main()
{

    float pessoas[15];
    float maior, menor = 0;
    int i = 1;

    maior = pessoas[0];
    menor = pessoas[0];

    for(i = 1; i < TAM_MAX; i++)
    {
        printf("\n\nAltura da [%d] Pessoa: ", i);
        scanf("%f", &pessoas[i]);
    }

    for(i = 0; i < TAM_MAX; i++)
    {
        if(pessoas[i] > maior){
            maior = pessoas[i];
        }else{
            menor = pessoas[i];
        }
    }

    printf("\n\nA altura maior eh: [%.2f]", maior);
    printf("\n\nA altura menor eh: [%.2f]\n\n", menor);

    return 0;
}
