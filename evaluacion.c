#include <stdio.h>
int main(void){ 
    int x;
    printf("PROGRAMA PARA CALCULAR EL VALOR F(X)\n");  //inicio del programa//
    
    while (x>=0)
    {
        printf("Igrese el valor de X que sea numero positivo: ");
        scanf("%d\n", &x);
    }
    
        
    
    if (x>=0 && x<=2)
    {
        printf("La funcion cuando x=%d es x^2 ", x);
    }
    
    
    
    return 0;
}