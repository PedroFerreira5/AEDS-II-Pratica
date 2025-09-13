#include <stdlib.h>
#include <stdio.h>


typedef struct no{
    int chave;
    int valor;
}No;

No L[5];

int busca1(int x){
    int i = 0; int busca1=-1; int n = -1;
    while(i < n){
        if(L[i].chave == x){
            busca1 = i;
            i=n+1;
        } else{
            i++;
        }
    }   
    return busca1;
}

int busca2(int x) {
    int i = 0;
    int n = 5; // Corrigido para 5
    int busca2 = -1; // Inicializado para -1
    
    // Verificação para evitar acesso a índice inválido
    if (n > 0) { 
        L[n - 1].chave = x; // Elemento sentinela
        while (L[i].chave != x) {
            i++;
        }
    }
    
    if (i < n - 1) {
        busca2 = i; // Encontrou a chave antes do sentinela
    } return busca2;  // Se i for igual ou maior que n-1, a busca2 permanece -1
}

int main() {
    // Inicializa o array L com alguns valores para teste
    L[0].chave = 10;
    L[0].valor = 100;

    L[1].chave = 20;
    L[1].valor = 200;

    L[2].chave = 30;
    L[2].valor = 300;

    L[3].chave = 40;
    L[3].valor = 400;

    L[4].chave = 50;
    L[4].valor = 500;

    int chave_a_procurar = 30;
    int resultado1, resultado2;

    printf("--- Testando a funcao busca1 ---\n");
    resultado1 = busca1(chave_a_procurar);
    if (resultado1 != -1) {
        printf("Chave %d encontrada na posicao %d (busca1).\n", chave_a_procurar, resultado1);
    } else {
        printf("Chave %d nao encontrada (busca1).\n", chave_a_procurar);
    }

    printf("\n--- Testando a funcao busca2 ---\n");
    // Vamos procurar uma chave que está no array e uma que não está.
    resultado2 = busca2(chave_a_procurar);
    if (resultado2 != -1) {
        printf("Chave %d encontrada na posicao %d (busca2).\n", chave_a_procurar, resultado2);
    } else {
        printf("Chave %d nao encontrada (busca2).\n", chave_a_procurar);
    }
    
    // Testando a busca por uma chave que não existe
    int chave_nao_existente = 99;
    resultado1 = busca1(chave_nao_existente);
    resultado2 = busca2(chave_nao_existente);
    
    printf("\n--- Testando a busca por chave inexistente ---\n");
    printf("Resultado para a busca de %d (busca1): %d\n", chave_nao_existente, resultado1);
    printf("Resultado para a busca de %d (busca2): %d\n", chave_nao_existente, resultado2);

    getchar();

    return 0;
}