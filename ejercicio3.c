/*
 *UNIVERSIDAD DE COSTA RICA
 *Escuela de Ingeniería Eléctrica
 *IE0117: Programación Bajo Plataformas Abiertas
 *Alejandro Viquez Alvarado
 * */


#include <stdio.h>

#define SIZE 5

int findLargestLine(int matrix[][SIZE]) {
    int largestLine = 0;
    int currentLine = 0;

    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            if (matrix[i][j] == 1) {
                currentLine++;
                if (currentLine > largestLine) {
                    largestLine = currentLine;
                }
            } else {
                currentLine = 0;

            }
        }
    }

    return largestLine;
}

int main() {
    int matrix[SIZE][SIZE] = {
        {0, 1, 1, 1, 0},
        {0, 1, 1, 1, 1},
        {1, 1, 1, 1, 0},
        {0, 1, 1, 0, 1},
        {1, 0, 1, 0, 1}
    };

    int largestLine = findLargestLine(matrix);
    printf("El tamaño de la secuencia de 1s más grande es: %d\n", largestLine);

    return 0;
}

