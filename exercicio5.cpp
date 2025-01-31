#include <iostream>
#include <string>
using namespace std;

string inverterString(const string& str) {
    string invertida = str;
    int inicio = 0;
    int fim = str.length() - 1;

    while (inicio < fim) {
        swap(invertida[inicio], invertida[fim]);
        inicio++;
        fim--;
    }

    return invertida;
}

int main() {
    string entrada;

    cout << "Digite uma string para inverter: ";
    getline(cin, entrada);

    string invertida = inverterString(entrada);

    cout << "String original: " << entrada << endl;
    cout << "String invertida: " << invertida << endl;

    return 0;
}