#include <stdio.h>

#define MAX_CIDADES 2
#define MAX_CODIGO 5
#define MAX_NOME 100

// Estrutura para armazenar os dados de uma carta
typedef struct {
    char estado;                // Estado da cidade (A-H)
    char codigo[MAX_CODIGO];    // Código da carta (ex: A01)
    char nomeCidade[MAX_NOME];   // Nome da cidade
    int populacao;              // População da cidade
    float area;                 // Área da cidade em km²
    float pib;                  // PIB da cidade
    int pontosTuristicos;       // Número de pontos turísticos
} Carta;

void lerDadosCarta(Carta *carta, int numero) {
    printf("Insira os dados da Carta %d:\n", numero);
    
    printf("Estado (A-H): ");
    scanf(" %c", &carta->estado);
    
    printf("Código da Carta (ex: A01): ");
    scanf("%s", carta->codigo);
    
    printf("Nome da Cidade: ");
    scanf(" %s [^\n]", carta->nomeCidade); // Lê até a nova linha
    
    printf("População: ");
    scanf("%d", &carta->populacao);
    
    printf("Área (em km²): ");
    scanf("%f", &carta->area);
    
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &carta->pib);
    
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &carta->pontosTuristicos);
    
    printf("\n");
}

void exibirDadosCarta(Carta carta, int numero) {
    printf("Carta %d:\n", numero);
    printf("Estado: %c\n", carta.estado);
    printf("Código: %s\n", carta.codigo);
    printf("Nome da Cidade: %s\n", carta.nomeCidade);
    printf("População: %d\n", carta.populacao);
    printf("Área: %.2f km²\n", carta.area);
    printf("PIB: %.2f bilhões de reais\n", carta.pib);
    printf("Número de Pontos Turísticos: %d\n", carta.pontosTuristicos);
    printf("\n");
}

int main() {
    Carta cartas[MAX_CIDADES];

    // Ler dados das cartas
    for (int i = 0; i < MAX_CIDADES; i++) {
        lerDadosCarta(&cartas[i], i + 1);
    }

    // Exibir dados das cartas
    for (int i = 0; i < MAX_CIDADES; i++) {
        exibirDadosCarta(cartas[i], i + 1);
    }

    return 0;
}











}