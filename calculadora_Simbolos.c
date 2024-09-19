#include <stdio.h>

int main() {
    // Cambio el tipo de variable de los operadores para que lea caracteres
    char opcion;
    float num1, num2, resultado;
    // Modifico la interfaz para que el usuario entienda qué tiene que hacer
    printf("Ingrese el símbolo de la operación: \n"); 
    printf("Suma: (+)\n");
    printf("Resta: (-)\n");
    printf("Multiplicación: (*)\n");
    printf("División: (/)\n");
    scanf("%c", &opcion);

    printf("Ingresa dos números: ");
    scanf("%f %f", &num1, &num2);
    // Modifico el switch para que funcione con los caracteres correspondientes
    switch(opcion) {
        case '+':
            resultado = num1 + num2;
            printf("Resultado: %.2f\n", resultado);
            break;
        case '-':
            resultado = num1 - num2;
            printf("Resultado: %.2f\n", resultado);
            break;
        case '*':
            resultado = num1 * num2;
            printf("Resultado: %.2f\n", resultado);
            break;
        case '/':
            if(num2 != 0) {
                resultado = num1 / num2;
                printf("Resultado: %.2f\n", resultado);
            } else {
                printf("Error: División por cero.\n");
            }
            break;
        default:
            printf("Opción inválida.\n");
    }

    return 0;
}