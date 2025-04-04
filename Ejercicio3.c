//Avila Flores Ahmed
//Practica 7

#include <stdio.h>
#include <math.h>

int main() {
    int op;
    int num1, num2;
    double res;

    do {
        printf("Menu: \n");
        printf("1.- Suma\n");
        printf("2.- Resta\n");
        printf("3.- Multiplicacion\n");
        printf("4.- Division\n");
        printf("5.- Raiz cuadrada\n");
        printf("6.- Potencia\n");
        printf("0.- Salida\n");
        printf("Escoge una opcion: ");
        scanf("%d", &op);

        switch(op) {
            case 1:
                printf("Dame un numero: ");
                scanf("%d", &num1);
                printf("Dame otro numero: ");
                scanf("%d", &num2);
                res = num1 + num2;
                printf("Resultado: %.2f\n", res);
                break;

            case 2:
                printf("Dame un numero: ");
                scanf("%d", &num1);
                printf("Dame otro numero: ");
                scanf("%d", &num2);
                res = num1 - num2;
                printf("Resultado: %.2f\n", res);
                break;

            case 3:
                printf("Dame un numero: ");
                scanf("%d", &num1);
                printf("Dame otro numero: ");
                scanf("%d", &num2);
                res = num1 * num2;
                printf("Resultado: %.2f\n", res);
                break;

            case 4:
                printf("Dame un numero: ");
                scanf("%d", &num1);
                printf("Dame otro numero: ");
                scanf("%d", &num2);
                if(num2 != 0) {
                    res = (double)num1 / num2;
                    printf("Resultado: %.2f\n", res);
                } else {
                    printf("Error: División entre cero no permitida.\n");
                }
                break;

            case 5:
                printf("Dame un numero: ");
                scanf("%d", &num1);
                if(num1 >= 0) {
                    res = sqrt(num1);
                    printf("Resultado: %.2f\n", res);
                } else {
                    printf("Error: Raíz de número negativo.\n");
                }
                break;

            case 6:
                printf("Dame una base: ");
                scanf("%d", &num1);
                printf("Dame un exponente: ");
                scanf("%d", &num2);
                res = pow(num1, num2);
                printf("Resultado: %.2f\n", res);
                break;

            case 0:
                printf("Saliendo del programa...\n");
                break;

            default:
                printf("Opción inválida.\n");
                break;
        }

        printf("\n");

    } while(op != 0);

    return 0;
}
