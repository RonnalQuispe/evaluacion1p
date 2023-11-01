#include <stdio.h>
int main(void)
{
    int x;
    printf("PROGRAMA PARA CALCULAR EL VALOR F(X)\n"); // inicio del programa//
    printf("Ingrese el valor de X\n ");
    scanf("%d", &x);

    while (x <= 0)
    {
        printf("El numero debe ser mayor a cero, ingrese nuevamente el numero:");
        scanf("%d/n", &x);
    }

    if (x >= 0 && x <= 2) // primera condicion que cuple si x esta entre 0 y 2//
    {
        printf("La funcion cuando x=%d es x^2\n ", x); // imprime si el valor se cumple//
    }
    if (x >= 3 && x <= 4) // segunda condicion que cuple si x esta entre 3 y 4//
    {
        printf("La funcion cuando x=%d es: -x^2+4\n ", x); // imprimir si se cumple la condicion//
    }
    if (x > 4) // ultima condicion que cuple si x es mayor que 4//
    {
        printf("La funcion cuando x=%d es: x+4\n ", x); // inprimir si se cumple la condicion//
    }

    return 0;
}