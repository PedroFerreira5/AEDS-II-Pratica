#include <stdio.h>
#include <stdlib.h>

typedef struct 
{
    int chave;
} Lista;


int busca1(Lista L[], int x, int n){
int i;
for(i = 0; i < n; i++){
    if (L[i].chave == x){
        return i;
    }
}
return -1;
}

int main(){
    int n = 5;
    int x;   
    Lista L[n] = {{1}, {2}, {3}, {4}, {5}};
    printf("Digite o valor a ser buscado : ");
    scanf("%d", &x);
    int pos = busca1(L, x, n);

    if (pos != -1){
        printf("Valor encontrado na posicao : %d\n", pos+1);
    } else {
        printf("Valor não encontrado!\n");
    }
    system("pause");
    return 0;
}