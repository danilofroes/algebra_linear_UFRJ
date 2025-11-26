/*
Código para calcular pontos intermediários em uma trajetória.
*/

#include <stdio.h>

typedef struct {float x; float y; float z;} Ponto3D;

void pontosIntermediarios(Ponto3D inicio, Ponto3D fim) {
    const float vetorDiretor[3] = {fim.x - inicio.x, fim.y - inicio.y, fim.z - inicio.z};
    const float vetorInicio[3] = {inicio.x, inicio.y, inicio.z};
    float equacaoReta[3];

    for (float t = 0; t <= 1; t += 0.25) {
        for (unsigned short i = 0; i < 3; i++) {
            equacaoReta[i] = vetorInicio[i] + (vetorDiretor[i] * t);
        }

        printf("\nP(%.2f) = (%.2f, %.2f, %.2f)\n", t, equacaoReta[0], equacaoReta[1], equacaoReta[2]);
    }
}

int main() {
    Ponto3D inicio = {0.0, 0.0, 0.0};
    Ponto3D fim = {10.0, 10.0, 10.0};

    printf("\nCalculando trajetoria de (0,0,0) ate (10,10,10):\n");
    pontosIntermediarios(inicio, fim);
    printf("\n");

    return 0;
}