/*#include <stdio.h>
#include <stdlib.h>
int dgt(int x)
{
    int a, b = 0;
    a = x;
    while(a)
    {
        a = a /10;
        b = b + 1;
    }
    return b;
}
int main()
{
    int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
    while(scanf("%d %d" ,&a, &b)!= EOF)
    {
        for(c=a,e=0; c<=b; c++)
        {
            d = dgt(c);
            if(d == 1){
                e++;
            }
            else if(d==2)
            {
                f=c%10;
                k=c/10;
                g=k%10;
                if(f!=g){
                    e++;
                }
            }
            else if(d==3)
            {
                f=c%10;
                k=c/10;
                g=k%10;
                l=k/10;
                h=l%10;
                if(f!=g && f!=h &&g!=h){
                    e++;
                }
            }
            else if(d==4)
            {
                f=c%10;
                k=c/10;
                g=k%10;
                l=k/10;
                h=l%10;
                j=l/10;
                i=j%10;
                if(f!=g && f!=h && f!=i && g!=h && g!=i && h!=i)
                {
                    e++;
                }
            }
        }
        printf("%d\n",e);
    }
    return 0;
}*/
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

