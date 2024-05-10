#include <omp.h>
#include <stdio.h>
#include <stdlib.h>
#define N 1000
int main(int argc, char *argv[]) {
    int sum = 0;
    printf("INICIO DE LA APLICACION PARALELA\n\n");
    #pragma omp parallel
    {
        int local_sum = 0; // Variable local para cada hilo
        // Cada hilo suma su parte del array
        #pragma omp for
        for (int i = 1; i <= N; ++i) {
            local_sum += i;
        }
        // Sincronización para evitar condiciones de carrera
        #pragma omp critical
        {
            sum += local_sum; // Agregar la suma local al total
        }
    }

    printf("\nLA SUMA DE LOS PRIMEROS %d NUMEROS ES: %d\n", N, sum);

    return 0;
}

