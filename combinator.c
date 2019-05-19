#include <stdio.h>
#include <string.h>
int main()
{
    int i, j, qnt, tamanho1, tamanho2, aux;
    char p1[50], p2[50];
    for(i=0; i<qnt; i++)
        {
        scanf("%d", &qnt);
        scanf("%s %s", p1, p2);
        tamanho1=strlen(p1);
        tamanho2=strlen(p2);
        if(tamanho1>=tamanho2)
        {
            aux = tamanho1;
        }
        else{
         aux = tamanho2;
        }
        for(j = 0; j < aux ;j++){
            if(j<tamanho1){
                printf("%c", p1[j]);
            }
            if(j<tamanho2){
                printf("%c", p2[j]);
            }
        }
        printf("\n");
    }
    return 0;
}
