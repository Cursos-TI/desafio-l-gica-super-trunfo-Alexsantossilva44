#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct Carta {
    char estado;
    char codigo[10];
    char cidade[50];
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;
} Carta;

void lerString(char *destino, int tamanho) {
    fgets(destino, tamanho, stdin);
    destino[strcspn(destino, "\n")] = '\0'; // remove o \n
}

int main() {
    Carta c1, c2;
    char buffer[50];

    printf("=== Cadastro da Carta 1 ===\n");

    printf("Estado (A-H): ");
    scanf(" %c", &c1.estado);
    getchar(); // limpar o \n

    printf("Codigo da carta (ex. A01 ... H04): ");
    lerString(c1.codigo, sizeof(c1.codigo));

    printf("Cidade: ");
    lerString(c1.cidade, sizeof(c1.cidade));

    printf("Populacao: ");
    lerString(buffer, sizeof(buffer));
    c1.populacao = atoi(buffer);

    printf("Area (Km2): ");
    lerString(buffer, sizeof(buffer));
    c1.area = atof(buffer);

    printf("PIB: ");
    lerString(buffer, sizeof(buffer));
    c1.pib = atof(buffer);

    printf("Pontos turisticos: ");
    lerString(buffer, sizeof(buffer));
    c1.pontos_turisticos = atoi(buffer);

    printf("\n=== Cadastro da Carta 2 ===\n");

    printf("Estado (A-H): ");
    scanf(" %c", &c2.estado);
    getchar(); // limpar o \n

    printf("Codigo da carta (ex. A01 ... H04): ");
    lerString(c2.codigo, sizeof(c2.codigo));

    printf("Cidade: ");
    lerString(c2.cidade, sizeof(c2.cidade));

    printf("Populacao: ");
    lerString(buffer, sizeof(buffer));
    c2.populacao = atoi(buffer);

    printf("Area (Km2): ");
    lerString(buffer, sizeof(buffer));
    c2.area = atof(buffer);

    printf("PIB: ");
    lerString(buffer, sizeof(buffer));
    c2.pib = atof(buffer);

    printf("Pontos turisticos: ");
    lerString(buffer, sizeof(buffer));
    c2.pontos_turisticos = atoi(buffer);

    printf("\n=== CARTA 1 CADASTRADA ===\n");
    printf("Estado: %c\n", c1.estado);
    printf("Codigo: %s\n", c1.codigo);
    printf("Cidade: %s\n", c1.cidade);
    printf("Populacao: %d\n", c1.populacao);
    printf("Area: %.2f Km2\n", c1.area);
    printf("PIB: %.2f\n", c1.pib);
    printf("Pontos Turisticos: %d\n", c1.pontos_turisticos);

    printf("\n=== CARTA 2 CADASTRADA ===\n");
    printf("Estado: %c\n", c2.estado);
    printf("Codigo: %s\n", c2.codigo);
    printf("Cidade: %s\n", c2.cidade);
    printf("Populacao: %d\n", c2.populacao);
    printf("Area: %.2f Km2\n", c2.area);
    printf("PIB: %.2f\n", c2.pib);
    printf("Pontos Turisticos: %d\n", c2.pontos_turisticos);

    if (c1.populacao > c2.populacao) {
        printf("\nCarta 1 vence na categoria Populacao!\n");
    } else if (c1.populacao < c2.populacao) {
        printf("\nCarta 2 vence na categoria Populacao!\n");
    } else {
        printf("\nEmpate na categoria Populacao!\n");
    }

    if (c1.area > c2.area) {
        printf("Carta 1 vence na categoria Area!\n");
    } else if (c1.area < c2.area) {
        printf("Carta 2 vence na categoria Area!\n");
    } else {
        printf("Empate na categoria Area!\n");
    }

    if (c1.pib > c2.pib) {
        printf("Carta 1 vence na categoria PIB!\n");
    } else if (c1.pib < c2.pib) {
        printf("Carta 2 vence na categoria PIB!\n");
    } else {
        printf("Empate na categoria PIB!\n");
    }

    if (c1.pontos_turisticos > c2.pontos_turisticos) {
        printf("Carta 1 vence na categoria Pontos Turisticos!\n");
    } else if (c1.pontos_turisticos < c2.pontos_turisticos) {
        printf("Carta 2 vence na categoria Pontos Turisticos!\n");
    } else {
        printf("Empate na categoria Pontos Turisticos!\n");
    }
    
    return 0;
}

