#include <stdio.h>
int main()
{
    float n, n2, total;
    scanf("%f %f", &n, &n2);
    if(n == 1)
    {
        total =  n2 * 4.00;
    }
    if(n == 2)
    {
        total =  n2 * 4.50;
    }
    if(n == 3)
    {
        total = n2 * 5.00;
    }
    if(n == 4)
    {
        total = n2 * 2.00;
    }
    if(n == 5)
    {
        total = n2 * 1.50;
    }
    printf("Total: R$%.2f\n", total);
    return 0;

}
