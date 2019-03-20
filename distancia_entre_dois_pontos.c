/* Leia os quatro valores correspondentes aos eixos x e y de dois pontos quaisquer no plano, p1(x1,y1) e p2(x2,y2)
e calcule a dist�ncia entre eles, mostrando 4 casas decimais ap�s a v�rgula, segundo a f�rmula:

Distancia =

Entrada
O arquivo de entrada cont�m duas linhas de dados. A primeira linha cont�m dois valores de ponto flutuante:
 x1 y1 e a segunda linha cont�m dois valores de ponto flutuante x2 y2.

Sa�da
Calcule e imprima o valor da dist�ncia segundo a f�rmula fornecida, com 4 casas ap�s o ponto decimal. */
#include <stdio.h>
#include <math.h>

int main()
{
    float x1, x2, y1, y2, raiz;
    scanf("%f %f %f %f", &x1, &y1, &x2, &y2);
    raiz = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
    printf("%.4f\n", raiz);
    return 0;
}
