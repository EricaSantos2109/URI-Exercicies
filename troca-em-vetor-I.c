//Faça um programa que leia um vetor N[20]. Troque a seguir, o primeiro elemento com o último,
//o segundo elemento com o penúltimo, etc., até trocar o 10º com o 11º. Mostre o vetor modificado.

//Entrada
//A entrada contém 20 valores inteiros, positivos ou negativos.

//Saída
//Para cada posição do vetor N, escreva "N[i] = Y", onde i é a posição do vetor e Y é o valor armazenado naquela posição.

#include <stdio.h>
int main()
{
    int n[20],i, troca = 0, ult;

    for(i=0; i < 20; i++)
    {
        scanf("%d", &n[i]);
    }
    for(i=0; i <10; i++)
    {
        ult = 19 - i;
        troca = n[i];
        n[i] = n[ult];
        n[ult] = troca;
    }
    for(i=0; i < 20; i++)
    {
        printf("N[%d] = %d\n", i, n[i]);
    }
    return 0;
}
