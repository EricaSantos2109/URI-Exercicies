
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int unidade, perm, verifica, n1, n2, n, i, j, k;
    int ncasa[4];
    while(scanf("%d %d", &n1, &n2) == 2)
    {
          perm = 0;
          for(i = n1; i <= n2; i++)
            {
                verifica = 0;
                unidade = 0;
                n = i;
                while(n != 0)
                {
                      ncasa[unidade] = n%10;
                      n /= 10;
                      unidade = unidade + 1;
                }
                for(j = 0; j < unidade; j++)
                {
                      for(k = j+1; k < unidade; k++)
                      {
                            if(ncasa[j] == ncasa[k])
                            {
                                 verifica = 1;
                            }
                      }
                }
                if(verifica == 0)
                {
                    perm = perm + 1;
                }
            }
          printf("%d\n", perm);
          }
    return 0;
}

