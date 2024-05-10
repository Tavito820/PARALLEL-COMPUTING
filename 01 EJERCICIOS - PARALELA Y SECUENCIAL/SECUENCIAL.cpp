#include <stdio.h>
#include <stdlib.h>
#define N 1000
int main(int argc, char *argv[]) {
    int sum = 0;
    printf("INICIO DEL CALCULO SECUENCIAL\n\n");
    for (int i = 1; i <= N; ++i) {
        sum += i;
    }
    printf("\nLA SUMA DE LOS PRIMEROS %d NUMEROS ES: %d\n", N, sum);
    return 0;
}

