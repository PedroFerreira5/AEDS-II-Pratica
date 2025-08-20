#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int chave;

}Lista ;

int busca(Lista L[], int x, int n){
    L[n].chave = x;
    int i = 0;
    L[n].chave = x;
    while(L[i].chave != x){
        i++;
    }
        if(i != n){
            return i;
        } else {
            return 0;
        }
    
}

int main(){
int n = 5+1;
int x;   
Lista L[n] = {{1}, {2}, {3}, {4}, {5}, {0}};
    printf("Digite o valor a ser buscado : ");
    scanf("%d", &x);
    int pos = busca(L, x, n);

    if (pos != -1){
        printf("Valor encontrado na posição? : %d\n", pos+1);
    } else {
        printf("Valor não encontrado! ");
    }   
    
    system("pause");
    return 0;

}