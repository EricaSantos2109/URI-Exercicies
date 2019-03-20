/*Leia um valor inteiro. A seguir, calcule o menor n�mero de notas poss�veis (c�dulas) no qual o valor pode ser decomposto.
As notas consideradas s�o de 100, 50, 20, 10, 5, 2 e 1. A seguir mostre o valor lido e a rela��o de notas necess�rias.

Entrada
O arquivo de entrada cont�m um valor inteiro N (0 < N < 1000000).

Sa�da
Imprima o valor lido e, em seguida, a quantidade m�nima de notas de cada tipo necess�rias,
conforme o exemplo fornecido. N�o esque�a de imprimir o fim de linha ap�s cada linha,
caso contr�rio seu programa apresentar� a mensagem: �Presentation Error�.*/

#include <stdio.h>
int main()
{
    int n100 = 0, n50 = 0, n20 = 0, n10 = 0, n5 = 0, n2 = 0, n1 = 0, N;
    scanf ("%d", &N);
    printf("%d\n", N);
    if (N >= 100)
    {
        n100 = N /100;
    }
    printf("%d nota(s) de R$ 100,00\n", n100);
    if (N >= 50)
      {
        n50 = (N - (n100 * 100)) / 50;
      }
      printf("%d nota(s) de R$ 50,00\n", n50);
    if (N >= 20)
      {
        n20 = (N - (n100 * 100) - (n50 * 50)) / 20;
      }
      printf("%d nota(s) de R$ 20,00\n", n20);
    if (N >= 10)
      {
        n10 = (N - (n100 * 100) - (n50 * 50) - (n20 * 20)) / 10;
      }
      printf("%d nota(s) de R$ 10,00\n", n10);
    if (N >= 5)
      {
        n5 = (N - (n100 * 100) - (n50 * 50) - (n20 * 20) - (n10 * 10)) / 5;
      }
      printf("%d nota(s) de R$ 5,00\n", n5);
    if (N >= 2)
      {
        n2 = (N - (n100 * 100) - (n50 * 50) - (n20 * 20) - (n10 * 10) - (n5 * 5)) / 2;
      }
      printf("%d nota(s) de R$ 2,00\n", n2);
    if (N >= 1)
      {
        n1 = (N - (n100 * 100) - (n50 * 50) - (n20 * 20) - (n10 * 10) - (n5 * 5) - (n2 * 2)) / 1;
      }
      printf("%d nota(s) de R$ 1,00\n", n1);
    return 0;
   }
