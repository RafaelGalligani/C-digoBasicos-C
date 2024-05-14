#include <stdio.h>
#include <stdlib.h>

float media (int *idades, int n);

int main(){
    int n_alunos;

    printf("Digite o numero de alunos que voce deseja calcular a média: ");
    scanf ("%d", &n_alunos);

    int *idades = (int*)malloc(sizeof(int) * n_alunos);

    if (idades == NULL){
        return 1;
    }

    for (int i = 0; i < n_alunos; i++){
        scanf("%d", &idades[i]);
    }

    printf("%.0f", media(idades, n_alunos));

    free(idades);

    return 0;
}

float media(int *idades, int n){
    int soma = 0;

    for (int i = 0; i < n; i++){
        soma += idades[i];
    }

    int medias = soma/n;

return medias;
}