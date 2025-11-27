#include <stdio.h>

typedef struct { float dados[3]; } VetorR3;

VetorR3 combinacaoLinear(VetorR3 vetores[], float pesos[], int n_vetores) {
    VetorR3 resultado = {{0.0f, 0.0f, 0.0f}};

    for (int i = 0; i < n_vetores; i++) {
        for (int j = 0; j < 3; j++) {
            resultado.dados[j] += pesos[i] * vetores[i].dados[j];
        }
    }

    return resultado;
}

void printVetor(VetorR3 v) {
    printf("(%.2f, %.2f, %.2f)\n\n", v.dados[0], v.dados[1], v.dados[2]);
}

int main() {
    VetorR3 vetores[] = {
        {{1.0f, 2.0f, 0.0f}}, 
        {{3.0f, 4.0f, 0.0f}}
    };

    float pesos[] = {2.0f, -1.0f};

    int qtd_vetores = 2;

    printf("\nCalculando combinacao linear...\n\n");
    VetorR3 resultadoFinal = combinacaoLinear(vetores, pesos, qtd_vetores);

    printf("Resultado: ");
    printVetor(resultadoFinal);

    return 0;
}