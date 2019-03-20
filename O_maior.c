/* Fa�a um programa que leia tr�s valores e apresente o maior dos tr�s valores lidos seguido da mensagem �eh o maior�. Utilize a f�rmula:

Obs.: a f�rmula apenas calcula o maior entre os dois primeiros (a e b).
Um segundo passo, portanto � necess�rio para chegar no resultado esperado.

Entrada
O arquivo de entrada cont�m tr�s valores inteiros.

Sa�da
Imprima o maior dos tr�s valores seguido por um espa�o e a mensagem "eh o maior". */

#include <stdio.h>
int main()
{
    int a, b, c, maior;
    scanf("%d %d %d", &a, &b, &c);
    if(a > b && a > c)
    {
        maior = a;
        printf("%d eh o maior\n", maior);
    }
    else if(b > a && b > c)
    {
        maior = b;
        printf("%d eh o maior\n", maior);
    }
    if(c > a && c > b)
    {
        maior = c;
        printf("%d eh o maior\n", maior);
    }
    return 0;
}
