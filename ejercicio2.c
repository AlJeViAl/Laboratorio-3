/*
 *UNIVERSIDAD DE COSTA RICA
 *Escuela de Ingeniería Eléctrica
 *IE0117: Programación Bajo Plataformas Abiertas
 *Alejandro Viquez Alvarado
 * */


#include <stdio.h>

int factorial(int n) {
    int i = 1;
    while (n > 1) {
        i = i * n;
        n = n - 1;
    }
    return i;
}

int main(int argc, char *argv[]) {
    int num;
    printf("Ingrese un número: ");
    scanf("%d", &num);

    int fac = factorial(num);
    printf("%d! = %d\n", num, fac);

    return 0;
}

