#include <stdio.h>

int calcular_suma_diagonales(int filas, int columnas, int matriz[][columnas]) {
  int suma_diagonal_principal = 0;
  int suma_diagonal_secundaria = 0;

  for (int i = 0; i < filas; i++) {
    suma_diagonal_principal += matriz[i][i];
    suma_diagonal_secundaria += matriz[i][columnas - i - 1];
  }

  return suma_diagonal_principal + suma_diagonal_secundaria;
}

int main() {
  // Matriz_1: Matriz 3x3
  int matriz1[3][3] = {
    {1, 2, 3},
    {4, 5, 6},
    {7, 8, 9}
  };
  printf("Suma de diagonales de matriz 3x3: %d\n", calcular_suma_diagonales(3, 3, matriz1));

  // Matriz_2: Matriz 4x4
  int matriz2[4][4] = {
    {1, 2, 3, 4},
    {5, 6, 7, 8},
    {9, 10, 11, 12},
    {13, 14, 15, 16}
  };
  printf("Suma de diagonales de matriz 4x4: %d\n", calcular_suma_diagonales(4, 4, matriz2));

  // Matriz_3: Matriz 5x5
  int matriz3[5][5] = {
    {1, 2, 3, 4, 5},
    {6, 7, 8, 9, 10},
    {11, 12, 13, 14, 15},
    {16, 17, 18, 19, 20},
    {21, 22, 23, 24, 25}
  };
  printf("Suma de diagonales de matriz 5x5: %d\n", calcular_suma_diagonales(5, 5, matriz3));

  return 0;
}

