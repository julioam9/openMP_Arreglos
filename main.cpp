#include <iostream>
#include <vector>
#include <omp.h>
#include <cstdlib>
#include <ctime>

int main() {

    int N = 1000;
    std::vector<int> A(N), B(N), C(N);

    // Inicializar semilla aleatoria
    srand(time(NULL));

    // Inicialización SECUENCIAL de los arreglos
    for (int i = 0; i < N; i++) {
        A[i] = rand() % 100;
        B[i] = rand() % 100;
    }

    // FOR PARALELO con OpenMP
    #pragma omp parallel for
    for (int i = 0; i < N; i++) {
        C[i] = A[i] + B[i];
    }

    // Imprimir una parte para verificar resultados
    for (int i = 0; i < 10; i++) {
        std::cout << "A[" << i << "] = " << A[i]
                  << " | B[" << i << "] = " << B[i]
                  << " | C[" << i << "] = " << C[i]
                  << std::endl;
    }

    return 0;
}

