#include <stdio.h>
#include <math.h>

int verificar_primo(int n) {
    int contador = 0;
    
    if (n <= 1) {
        return 0; 
    }

    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            contador++;
            break;
        }
    }

    if (contador == 0) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int numero;
    char opcao;

    do{
    printf("Digite um numero: ");
    scanf("%d", &numero);

    if (numero < 0) {
        printf("Apenas numeros positivos.\n");
    } else {
        if (verificar_primo(numero)) {
            printf("%d eh um numero primo.\n", numero);
        } else {
            printf("%d nao eh um numero primo.\n", numero);
        }
    }
    printf("Deseja digitar numeros novamente? (S/N): ");
    scanf(" %c", &opcao);
    } while (opcao == 'S' || opcao == 's');

    
    

    return 0;
}
