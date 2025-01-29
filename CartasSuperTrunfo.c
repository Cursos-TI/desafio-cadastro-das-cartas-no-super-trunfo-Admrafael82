#include <stdio.h>

#define ESTADOS 8
#define CIDADES_POR_ESTADO 4

typedef struct {
    char codigo[4];
    int populacao;
    float area;
    double pib;
    int pontos_turisticos;
} Carta;

void cadastrarCartas(Carta cartas[ESTADOS * CIDADES_POR_ESTADO]) {
    char estados[ESTADOS] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H'};
    int index = 0;
    
    for (int i = 0; i < ESTADOS; i++) {
        for (int j = 1; j <= CIDADES_POR_ESTADO; j++) {
            sprintf(cartas[index].codigo, "%c%02d", estados[i], j);
            
            printf("Cadastro da carta %s:\n", cartas[index].codigo);
            printf("Populacao: ");
            scanf("%d", &cartas[index].populacao);
            printf("Area (km2): ");
            scanf("%f", &cartas[index].area);
            printf("PIB (em bilhões): ");
            scanf("%lf", &cartas[index].pib);
            printf("Número de pontos turísticos: ");
            scanf("%d", &cartas[index].pontos_turisticos);
            
            index++;
        }
    }
}

void exibirCartas(Carta cartas[ESTADOS * CIDADES_POR_ESTADO]) {
    printf("\nCartas cadastradas:\n");
    for (int i = 0; i < ESTADOS * CIDADES_POR_ESTADO; i++) {
        printf("Código: %s\n", cartas[i].codigo);
        printf("População: %d\n", cartas[i].populacao);
        printf("Área: %.2f km²\n", cartas[i].area);
        printf("PIB: %.2lf bilhões\n", cartas[i].pib);
        printf("Pontos turísticos: %d\n", cartas[i].pontos_turisticos);
        printf("-------------------------\n");
    }
}

int main() {
    Carta cartas[ESTADOS * CIDADES_POR_ESTADO];
    cadastrarCartas(cartas);
    exibirCartas(cartas);
    return 0;
}
}
