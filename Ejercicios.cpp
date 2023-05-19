#include <iostream>
#include <string>
using namespace std;

// Función para calcular el factorial de un número
int calcularFactorial(int numero) {
    int factorial = 1;
    for (int i = 1; i <= numero; i++) {
        factorial *= i;
    }
    return factorial;
}

// Función para verificar si un número es primo
bool esPrimo(int numero) {
    if (numero < 2) {
        return false;
    }
    for (int i = 2; i * i <= numero; i++) {
        if (numero % i == 0) {
            return false;
        }
    }
    return true;
}

// Función para contar las vocales en una cadena
int contarVocales(string cadena) {
    int contador = 0;
    for (char c : cadena) {
        char lowercase = tolower(c);
        if (lowercase == 'a' || lowercase == 'e' || lowercase == 'i' || lowercase == 'o' || lowercase == 'u') {
            contador++;
        }
    }
    return contador;
}

// Función para imprimir la serie de Fibonacci hasta un número dado
void imprimirSerieFibonacci(int limite) {
    int a = 0, b = 1;
    cout << "Serie de Fibonacci hasta " << limite << ":" << endl;
    while (a <= limite) {
        cout << a << endl;
        int temp = a;
        a = b;
        b = temp + b;
    }
}

// Función para calcular el máximo común divisor (MCD)
int calcularMCD(int num1, int num2) {
    while (num2 != 0) {
        int temp = num2;
        num2 = num1 % num2;
        num1 = temp;
    }
    return num1;
}

// Función para calcular la suma de los números pares del 1 al 100
int calcularSumaPares() {
    int suma = 0;
    for (int i = 2; i <= 100; i += 2) {
        suma += i;
    }
    return suma;
}

// Función para verificar si un número es perfecto
bool esNumeroPerfecto(int numero) {
    int sumaDivisores = 0;
    for (int i = 1; i < numero; i++) {
        if (numero % i == 0) {
            sumaDivisores += i;
        }
    }
    return sumaDivisores == numero;
}

// Función para imprimir los primeros n números primos
void imprimirPrimerosPrimos(int n) {
    cout << "Primeros " << n << " numeros primos:" << endl;
    int contador = 0;
    int numero = 2;
    while (contador < n) {
        if (esPrimo(numero)) {
            cout << numero << endl;
            contador++;
        }
        numero++;
    }
}

// Función para verificar si una cadena es un palíndromo
bool esPalindromo(string cadena) {
    int longitud = cadena.length();
    for (int i = 0; i < longitud / 2; i++) {
        if (tolower(cadena[i]) != tolower(cadena[longitud - 1 - i])) {
            return false;
        }
    }
    return true;
}

// Función para calcular la suma de los dígitos de un número
int calcularSumaDigitos(int numero) {
    int suma = 0;
    while (numero != 0) {
        suma += numero % 10;
        numero /= 10;
    }
    return suma;
}

// Función para imprimir los números impares del 1 al 50 en orden descendente
void imprimirImparesDescendente() {
    cout << "Numeros impares del 1 al 50 en orden descendente:" << endl;
    for (int i = 49; i >= 1; i -= 2) {
        cout << i << endl;
    }
}

// Función para verificar si un número es un número Armstrong
bool esNumeroArmstrong(int numero) {
    int sumaCubos = 0;
    int temp = numero;
    while (temp != 0) {
        int digito = temp % 10;
        sumaCubos += digito * digito * digito;
        temp /= 10;
    }
    return sumaCubos == numero;
}

// Función para generar una tabla de multiplicar para un número
void generarTablaMultiplicar(int numero) {
    cout << "Tabla de multiplicar del " << numero << ":" << endl;
    for (int i = 1; i <= 10; i++) {
        cout << numero << " x " << i << " = " << numero * i << endl;
    }
}

// Función para convertir un número a su representación binaria
string convertirABinario(int numero) {
    string binario = "";
    while (numero != 0) {
        binario = to_string(numero % 2) + binario;
        numero /= 2;
    }
    return binario;
}

// Función para verificar si un número es perfecto o no
bool esPerfecto(int numero) {
    int sumaDivisores = 0;
    for (int i = 1; i < numero; i++) {
        if (numero % i == 0) {
            sumaDivisores += i;
        }
    }
    return sumaDivisores == numero;
}

// Función para imprimir los primeros n términos de la secuencia de números de Pell
void imprimirTerminosPell(int n) {
    cout << "Primeros " << n << " terminos de la secuencia de Pell:" << endl;
    int a = 0, b = 1;
    for (int i = 0; i < n; i++) {
        cout << a << endl;
        int temp = a;
        a = b;
        b = 2 * b + temp;
    }
}

// Función para calcular la suma de los dígitos pares de un número
int calcularSumaDigitosPares(int numero) {
    int suma = 0;
    while (numero != 0) {
        int digito = numero % 10;
        if (digito % 2 == 0) {
            suma += digito;
        }
        numero /= 10;
    }
    return suma;
}

// Función para imprimir los números del 1 al 100 con reemplazo de múltiplos
void imprimirConReemplazo() {
    cout << "Numeros del 1 al 100 con reemplazo de multiplos:" << endl;
    for (int i = 1; i <= 100; i++) {
        if (i % 3 == 0 && i % 5 == 0) {
            cout << "FizzBuzz" << endl;
        } else if (i % 3 == 0) {
            cout << "Fizz" << endl;
        } else if (i % 5 == 0) {
            cout << "Buzz" << endl;
        } else {
            cout << i << endl;
        }
    }
}

int main() {
    // Mostrar números del 1 al 10 en orden ascendente
    cout << "Numeros del 1 al 10 en orden ascendente:" << endl;
    for (int i = 1; i <= 10; i++) {
        cout << i << endl;
    }

    // Determinar si un número ingresado por el usuario es positivo o negativo
    int numero;
    cout << "Ingrese un numero: ";
    cin >> numero;
    if (numero > 0) {
        cout << "El numero ingresado es positivo." << endl;
    } else if (numero < 0) {
        cout << "El numero ingresado es negativo." << endl;
    } else {
        cout << "El numero ingresado es cero." << endl;
    }

    // Calcular el factorial de un número ingresado por el usuario
    int numeroFactorial;
    cout << "Ingrese un numero para calcular su factorial: ";
    cin >> numeroFactorial;
    int factorial = calcularFactorial(numeroFactorial);
    cout << "El factorial de " << numeroFactorial << " es: " << factorial << endl;

    // Determinar si un número ingresado por el usuario es primo
    int numeroPrimo;
    cout << "Ingrese un numero para verificar si es primo: ";
    cin >> numeroPrimo;
    if (esPrimo(numeroPrimo)) {
        cout << "El numero ingresado es primo." << endl;
    } else {
        cout << "El numero ingresado no es primo." << endl;
    }

    // Contar las vocales en una cadena ingresada por el usuario
    string cadena;
    cout << "Ingrese una cadena: ";
    cin.ignore();  // Limpiar el buffer de entrada para evitar problemas con getline
    getline(cin, cadena);
    int cantidadVocales = contarVocales(cadena);
    cout << "La cadena ingresada contiene " << cantidadVocales << " vocales." << endl;

    // Imprimir la serie de Fibonacci hasta el número 1000
    imprimirSerieFibonacci(1000);

    // Mostrar el máximo común divisor (MCD) de dos números ingresados por el usuario
    int num1, num2;
    cout << "Ingrese dos numeros para calcular su MCD: ";
    cin >> num1 >> num2;
    int mcd = calcularMCD(num1, num2);
    cout << "El MCD de " << num1 << " y " << num2 << " es: " << mcd << endl;

    // Calcular la suma de los números pares del 1 al 100
    int sumaPares = calcularSumaPares();
    cout << "La suma de los numeros pares del 1 al 100 es: " << sumaPares << endl;

    // Determinar si un número ingresado por el usuario es un número perfecto
    int numeroPerfecto;
    cout << "Ingrese un numero para verificar si es perfecto: ";
    cin >> numeroPerfecto;
    if (esNumeroPerfecto(numeroPerfecto)) {
        cout << "El numero ingresado es perfecto." << endl;
    } else {
        cout << "El numero ingresado no es perfecto." << endl;
    }

    // Imprimir los primeros 100 números primos
    imprimirPrimerosPrimos(100);

    // Determinar si una cadena ingresada por el usuario es un palíndromo
    string cadenaPalindromo;
    cout << "Ingrese una cadena para verificar si es un palindromo: ";
    cin.ignore();  // Limpiar el buffer de entrada para evitar problemas con getline
    getline(cin, cadenaPalindromo);
    if (esPalindromo(cadenaPalindromo)) {
        cout << "La cadena ingresada es un palindromo." << endl;
    } else {
        cout << "La cadena ingresada no es un palindromo." << endl;
    }

    // Calcular la suma de los dígitos de un número ingresado por el usuario
    int numeroSumaDigitos;
    cout << "Ingrese un numero para calcular la suma de sus digitos: ";
    cin >> numeroSumaDigitos;
    int sumaDigitos = calcularSumaDigitos(numeroSumaDigitos);
    cout << "La suma de los digitos de " << numeroSumaDigitos << " es: " << sumaDigitos << endl;

    // Imprimir los números impares del 1 al 50 en orden descendente
    imprimirImparesDescendente();

    // Verificar si un número ingresado por el usuario es un número Armstrong
    int numeroArmstrong;
    cout << "Ingrese un numero para verificar si es un numero Armstrong: ";
    cin >> numeroArmstrong;
    if (esNumeroArmstrong(numeroArmstrong)) {
        cout << "El numero ingresado es un numero Armstrong." << endl;
    } else {
        cout << "El numero ingresado no es un numero Armstrong." << endl;
    }

    // Generar una tabla de multiplicar para un número ingresado por el usuario
    int numeroTablaMultiplicar;
    cout << "Ingrese un numero para generar su tabla de multiplicar: ";
    cin >> numeroTablaMultiplicar;
    generarTablaMultiplicar(numeroTablaMultiplicar);

    // Mostrar la representación en binario de un número ingresado por el usuario
    int numeroBinario;
    cout << "Ingrese un numero para obtener su representación en binario: ";
    cin >> numeroBinario;
    string binario = convertirABinario(numeroBinario);
    cout << "La representacion en binario de " << numeroBinario << " es: " << binario << endl;

    // Determinar si un número ingresado por el usuario es perfecto o no
    int numeroPerfecto2;
    cout << "Ingrese un numero para verificar si es perfecto: ";
    cin >> numeroPerfecto2;
    if (esPerfecto(numeroPerfecto2)) {
        cout << "El numero ingresado es perfecto." << endl;
    } else {
        cout << "El numero ingresado no es perfecto." << endl;
    }

    // Imprimir los primeros 20 términos de la secuencia de números de Pell
    imprimirTerminosPell(20);

    // Calcular la suma de los dígitos pares de un número ingresado por el usuario
    int numeroSumaDigitosPares;
    cout << "Ingrese un numero para calcular la suma de sus digitos pares: ";
    cin >> numeroSumaDigitosPares;
    int sumaDigitosPares = calcularSumaDigitosPares(numeroSumaDigitosPares);
    cout << "La suma de los digitos pares de " << numeroSumaDigitosPares << " es: " << sumaDigitosPares << endl;

    // Imprimir los números del 1 al 100 con reemplazo de múltiplos
    imprimirConReemplazo();

    return 0;
}
