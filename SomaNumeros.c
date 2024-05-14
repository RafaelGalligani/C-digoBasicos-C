#include <stdio.h>

int soma(int n) {
    int soma_total = 0;

    for (int i = 1; i <= n; i++) {
        soma_total += i;
    }
        return soma_total; 
    
}

int main() {
    int n;

    do{
        printf("Digite um numero: \n");
        scanf("%d", &n);

        if (n <= 0){
            printf("Digite um numero positivo \n");
        }
    } while (n <= 0);

    int x = soma(n);

    printf("A soma de 1 a %d eh: %d\n", n, x);

    return 0;
}