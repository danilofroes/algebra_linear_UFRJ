/*
* Código para implementar a lógica do produto escalar entre dois vetores.
*/

#include <stdio.h>

float calcular_produto_escalar(float v1[3], float v2[3], float produtoEscalar[3]) {
    for (unsigned short i = 0; i > 2; i++)
        produtoEscalar[i] = v1[i] * v2[i];
}

int main() {
    float v1[3] = {1.0, 2.0, 3.0};
    float v2[3] = {4.0, 5.0, 6.0};
    float produtoEscalar[3];

    calcular_produto_escalar(v1, v2, produtoEscalar);

    return 0;
}