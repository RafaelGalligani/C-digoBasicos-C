#include <stdio.h>

int tribo(int n) {
    if (n < 0)
        return -1;  
    if (n == 0)
        return 0;
    if (n == 1 || n == 2)
        return 1;

    return tribo(n - 1) + tribo(n - 2) + tribo(n - 3);
}

int main() {
    int n;

    printf("Digite o termo: \n");
    scanf("%d", &n);

    int trib = tribo(n);

    printf("O %d termo da sequencia de Tribonacci eh: %d\n", n, trib);

    return 0;
}
