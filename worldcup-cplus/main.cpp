#include <stdio.h>

const int MAX_STRING = 80;
const int TAM_NOMBRES = 3;
const int TAM_PAISES = 4;
const char NULO = '\0';
const char ENTER = '\n';
const char ESPACIO = ' ';
typedef char string [MAX_STRING];
typedef string arregloNombres [TAM_NOMBRES];
typedef string arregloPaises [TAM_PAISES];
typedef int matrizVotacion [TAM_NOMBRES][TAM_PAISES];
typedef enum {FALSE, TRUE} boolean;

int main()
{
    string nombre;
    arregloNombres usuariosA, usuariosB;
    arregloPaises paises, rankingA, rankingB;
    matrizVotacion votosA, votosB;
    int i, j, k, l, m;
    for (j = 0; j < TAM_NOMBRES; j++) {
        i = 0;
        printf("Ingrese el nombre de un participante\n");
        scanf("%c", &usuariosA[j][i]);
            while ((usuariosA[j][i] != ENTER) && (i < MAX_STRING - 1)) {
                i++;
                scanf("%c", &usuariosA[j][i]);
            }
        usuariosA[j][i] = NULO;
    }
    for (j = 0; j < TAM_NOMBRES; j++) {
        i = 0;
        printf("Ingrese el nombre de un participante\n");
        scanf("%c", &usuariosB[j][i]);
            while ((usuariosB[j][i] != ENTER) && (i < MAX_STRING - 1)) {
                i++;
                scanf("%c", &usuariosB[j][i]);
            }
        usuariosB[j][i] = NULO;
    }
    printf("Los participantes del 1er grupo son:\n");
    for (i = 0; i < TAM_NOMBRES; i++) {
        j = 0;
        while (usuariosA[i][j] != NULO) {
            printf("%c", usuariosA[i][j]);
            j++;
        }
        printf("\n");
    }
    printf("Los participantes del 2o grupo son:\n");
    for (i = 0; i < TAM_NOMBRES; i++) {
        j = 0;
        while (usuariosB[i][j] != NULO) {
            printf("%c", usuariosB[i][j]);
            j++;
        }
        printf("\n");
    }
    for (j = 0; j < TAM_PAISES; j++) {
        i = 0;
        printf("Ingrese un pais en semifinales\n");
        scanf("%c", &paises[j][i]);
            while ((paises[j][i] != ENTER) && (i < MAX_STRING - 1)) {
                i++;
                scanf("%c", &paises[j][i]);
            }
        paises[j][i] = NULO;
    }
    printf("Los paises en semifinales son:\n");
    for (i = 0; i < TAM_PAISES; i++) {
        j = 0;
        while (paises[i][j] != NULO) {
            printf("%c", paises[i][j]);
            j++;
        }
        printf("\n");
    }
    for (i = 0; i < TAM_NOMBRES; i++) {
        j = 0;
        while (usuariosA[i][j] != NULO) {
            printf("%c", usuariosA[i][j]);
            j++;
        }
        printf(" ingrese su votacion para ");
        for (k = 0; k < TAM_PAISES; k++) {
            l = 0;
            if (k > 0) {
                printf("Para ");
            }
            while (paises[k][l] != NULO) {
                printf("%c", paises[k][l]);
                l++;
            }
            printf(":\n");
            scanf("%d", &votosA[i][k]);
        }
        printf("\n");
    }
    for (i = 0; i < TAM_NOMBRES; i++) {
        j = 0;
        while (usuariosB[i][j] != NULO) {
            printf("%c", usuariosB[i][j]);
            j++;
        }
        printf(" ingrese su votacion para ");
        for (k = 0; k < TAM_PAISES; k++) {
            l = 0;
            if (k > 0) {
                printf("Para ");
            }
            while (paises[k][l] != NULO) {
                printf("%c", paises[k][l]);
                l++;
            }
            printf(":\n");
            scanf("%d", &votosB[i][k]);
        }
        printf("\n");
    }
    printf("La matriz de votos del 1er grupo es:\n");
    for (i = 0; i < TAM_NOMBRES; i++) {
        for (j = 0; j < TAM_PAISES; j++) {
            printf("%d", votosA[i][j]);
        }
        printf("\n");
    }
    printf("La matriz de votos del 2o grupo es:\n");
    for (i = 0; i < TAM_NOMBRES; i++) {
        for (j = 0; j < TAM_PAISES; j++) {
            printf("%d", votosB[i][j]);
        }
        printf("\n");
    }

}
