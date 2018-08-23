/* Este programa es para obtener dos números del usuario
 * para después obtener su suma, resta y multiplicación.
 *
 * Autor: Soraya Maqueda
 * Fecha: 21/08/2018
 * Correo: soraya_maqueda@hotmail.com
 * */
#include <stdio.h>

int main() {
    //Declaración de variables.
    //num1 = primer número
    //num2 = segundo número
    //sum, rest, times = suma, resta multiplicación respectivamente.
    double num1;
    double num2;
    double sum;
    double rest;
    double times;

    //Aquí obtendré los datos que el usuario quiera proporcionar.
    printf("Bienvenido. Te voy a ayudar a calcular la suma, resta y el producto de dos números.");
    printf("Dame el primer número:"); //Aquí el usuario ingresa el primer número.
    scanf("%lf", &num1); //Esto ignresa el dato y lo direcciona a ser almacenado en la variable num1.
    printf("Dame el segundo número:"); //Aquí el usuario ingresa el segundo número.
    scanf("%lf", &num2); //Esto ingresa el dato y lo direcciona a ser almacenado en la variable num2.

    //Aquí se realizan los cálculos.
    sum = num1 + num2; //Calcula la suma.
    rest = num1 - num2; //Calcula la diferencia.
    times = num1 * num2; //Calcula el producto.

    //Aquí se muestran en pantalla los resultados de las operaciones.
    printf("La suma es: %lf\n", sum); //Muestra la suma en la pantalla.
    printf("La diferencia es: %lf\n", rest); //Muestra la diferencia en la pantalla.
    printf("El producto es: %lf\n", times); //Muestra el producto en la pantalla.
    return 0;
}