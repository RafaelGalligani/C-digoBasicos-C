#include <stdio.h>

int potencia(int x, int y) {
    if (y == 0) {
        return 1;  
    } else if (y % 2 == 0) {
        int temp = potencia(x, y / 2);
        return temp * temp;
    } else {
        int temp = potencia(x, (y - 1) / 2);
        return x * temp * temp;
    }
}

int main() {
    int x, y;

    do{
        printf("Base\n");
        scanf("%d", &x);
        if (x <= 0){
            printf("Digite um numero inteiro \n");
        }
     } while (x <= 0);

    do{
        printf("Expoente\n");
        scanf("%d", &y);
        if (y <= 0){
            printf("Digite um numero inteiro \n");
        }
     } while (y <= 0);  

    int resultado = potencia(x, y);

    printf("%d elevado a %d eh: %d\n", x, y, resultado);

    return 0;
}