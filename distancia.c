/* Dois carros (X e Y) partem em uma mesma dire��o. O carro X sai com velocidade constante de 60 Km/h
e o carro Y sai com velocidade constante de 90 Km/h.

Em uma hora (60 minutos) o carro Y consegue se distanciar 30 quil�metros do carro X,
ou seja, consegue se afastar um quil�metro a cada 2 minutos.

Leia a dist�ncia (em Km) e calcule quanto tempo leva (em minutos) para o carro Y tomar essa dist�ncia do outro carro.

Entrada
O arquivo de entrada cont�m um n�mero inteiro.

Sa�da
Imprima o tempo necess�rio seguido da mensagem "minutos". */

#include <stdio.h>
int main()
{
    int x, y, minutos, distancia, resul;
    x = 60;
    y = 90;
    scanf("%d", &distancia);
    minutos = distancia * 60;
    resul = minutos / 30;
    printf("%d minutos\n", resul);
    return 0;
}
