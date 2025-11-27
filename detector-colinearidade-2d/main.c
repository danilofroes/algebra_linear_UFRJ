#include <stdio.h>
#include <math.h>

typedef struct { float x; float y; } Ponto2D;

int verificarColinearidade(Ponto2D u, Ponto2D v) {
    float determinante = u.x * v.y - u.y * v.x;
    const float EPSILON = 0.0001;

    if (fabs(determinante) < EPSILON)
        return 1;

    return 0;
}

int main() {
    Ponto2D u = {8.0, 0.0};
    Ponto2D v = {45.0, 10.0};

    printf("\nVerificando colinearidade:\n");
    verificarColinearidade(u, v) ? printf("\nSao colineares!\n\n") : printf("\nNao sao colineares!\n\n");

    return 0;
}