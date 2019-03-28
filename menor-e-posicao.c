//Fa�a um programa que leia um valor N. Este N ser� o tamanho de um vetor X[N].
//A seguir, leia cada um dos valores de X, encontre o menor elemento deste vetor e a sua posi��o dentro do vetor, mostrando esta informa��o.

//Entrada
//A primeira linha de entrada contem um �nico inteiro N (1 < N < 1000),
//indicando o n�mero de elementos que dever�o ser lidos em seguida para o vetor X[N] de inteiros.
//A segunda linha cont�m cada um dos N valores, separados por um espa�o.

//Sa�da
//A primeira linha apresenta a mensagem �Menor valor:� seguida de um espa�o e do menor valor lido na entrada.
//A segunda linha apresenta a mensagem �Posicao:� seguido de um espa�o e da posi��o do vetor
//na qual se encontra o menor valor lido, lembrando que o vetor inicia na posi��o zero.

#include <stdio.h>
int main()
{
    int X[1000];
    int N, menor, posicao, i = 0, soma=0;
    scanf("%d", &N);
    for(i=0; i<N; i++)
    {
        scanf("%d", &X[i]);
    }
    menor=X[0];
    for(i=0; i<N; i++)
    {
        if(menor>X[i])
        {
            menor = X[i];
            posicao = i;
        }
    }
    printf("Menor valor: %d\nPosicao: %d\n", menor, posicao);
    return 0;
}
