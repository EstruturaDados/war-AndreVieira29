#include <stdio.h>
#include <string.h>

#define MAX_TERRITORIOS 5 //constante para a quantidade de territorios

//Armazena nome do território, cor do exército e quantidade de tropas
typedef struct {
    char nome[30];
    char cor[10];
    int tropas;
} Territorio;

int main() {
    //Declaração do vetor de territórios
    Territorio territorios[MAX_TERRITORIOS];

    // Cadastro dos territórios
    printf("Cadastro de %d territórios:\n\n", MAX_TERRITORIOS);
    for (int i = 0; i < MAX_TERRITORIOS; i++) {
        printf("Território %d:\n", i + 1);

        //Nome do território
        printf("Digite o nome do território: ");
        fgets(territorios[i].nome, sizeof(territorios[i].nome), stdin);


        //cor do exército
        printf("Digite a cor do exército: ");
        scanf(" %s", territorios[i].cor); // Lê uma palavra

        //quantidade de tropas
        printf("Digite a quantidade de tropas: ");
        scanf("%d", &territorios[i].tropas);
         printf("\n");
    }

    //Exibe dos dados cadastrados
    printf("=== Territórios cadastrados ===\n\n");
    for (int i = 0; i < MAX_TERRITORIOS; i++) {
        printf("Território %d:\n", i + 1);
        printf("Nome: %s\n", territorios[i].nome);
        printf("Cor do exército: %s\n", territorios[i].cor);
        printf("Quantidade de tropas: %d\n\n", territorios[i].tropas);
    }

    return 0;
}
