#include <iostream>
using namespace std;

bool fibonacci(int num) {
    int a = 0, b = 1;
    while (b < num) {
        int temp = b;
        b = a + b;
        a = temp;
    }
    return (b == num || num == 0);
}

int main() {
    int numero;
    cout << "Digite um número para verificar se pertence à sequência de Fibonacci: ";
    cin >> numero;

    if (fibonacci(numero)) {
        cout << numero << " pertence à sequência de Fibonacci." << endl;
    } else {
        cout << numero << " não pertence à sequência de Fibonacci." << endl;
    }

    return 0;
}