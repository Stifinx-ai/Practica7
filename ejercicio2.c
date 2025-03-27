//Avila Flores Ahmed
Ejercicio 2 
/programa que valida que sea par o impar


#include <stdio.h>

void main ()
{
    int num;
    
    printf("Dame un numero: ");
    scanf("%i", &num);
    
    if(num % 2 == 0)
    {
        printf("el numero es par \n");
    }
    else
    {
    printf("el numero es impar\n");
    }
}
