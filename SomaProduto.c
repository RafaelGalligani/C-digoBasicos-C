#include <stdio.h>

void soma_produto (int a, int b, int *soma, int *produto){
    *soma = a + b;
    *produto = a * b;

}

int main(){

    int n1,n2, s, p;
    char opcao;

    do{
    printf("Digite o primeiro numero: ");
    scanf("%d", &n1);

    printf("Digite o segundo numero: ");
    scanf("%d", &n2);

    if (n1 < 0 || n2 < 0 ){
        printf("Apenas numeros positivos");
        break;
    }

    soma_produto(n1, n2, &s, &p );

    printf("Soma: %d\nProduto: %d\n", s, p);

    printf("Deseja digitar numeros novamente? (S/N): ");
    scanf(" %c", &opcao);
    } while (opcao == 'S' || opcao == 's');

    return 0;
}

