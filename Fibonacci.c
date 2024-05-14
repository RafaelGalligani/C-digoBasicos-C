#include <stdio.h>

int fibo(int n) {
    if (n < 2)
        return n;

    int primeiro = 0;
    int segundo = 1;
    int resultado;

    for (int i = 2; i <= n; i++) {
        resultado = primeiro + segundo;
        primeiro = segundo;
        segundo = resultado; 
    }

    return resultado;
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


    int fib = fibo(n);

    printf("O termo %d da sequencia de fibonacci eh: %d\n", n, fib);

    return 0;
}