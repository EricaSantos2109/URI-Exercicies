#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    int N, B, i, j, vetor[200], teste[200], p;
    while(scanf("%d %d", &N, &B), N)
    {
        memset(teste, 0, sizeof teste);
        i = 0;
        while(i < B)
        {
            scanf("%d", &vetor[i]);
            for(j = 0; j < i; j++)
            {
                teste[abs(vetor[i]-vetor[j])] = 1;
            }
            i= i+1;
        }
        p = 1;
        for(i = 1; i <= N && p; i++)
        {
            if(!teste[i])
                {
                  p = 0;
                }
        }
       if(p){
        printf ("Y\n");
       }else{
        printf("N\n");
        }
    }
    return 0;
}
