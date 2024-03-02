
/*Un ciclo que sume los numeros impares en una variable "a" y los numeros pares en una variable "b"
 en un rango de 0 a 50 utilizando la estructura de control "while"


 */

#include <iostream>
using namespace std;


int main() {
    int a = 0; // Variable numeros impares
    int b = 0; // Variable numeros pares
    int i = 0; // Variable rango



    while (i <= 50) {
        if (i % 2 == 0) { // Si el numero es par
            b += i; // Sumar al total
        } else { // Si el número es impar
            a += i; // Sumar al total de números impares
        }
        i++; // Incrementar el contador
    }

    cout << "La suma de los numeros impares es: " << a << endl;
    cout << "La suma de los numeros pares es: " << b << endl;



    return 0;


}

