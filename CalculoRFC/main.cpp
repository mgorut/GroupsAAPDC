#include <iostream>
#include <string>

using namespace std;

int main() {

    string primerNombre, apellidoPaterno, apellidoMaterno, fechaNacimiento, rfc;

    cout << "Digite su primer nombre: " << endl;
    cin >> primerNombre;

    cout << "Digite su apellido paterno: " << endl;
    cin >> apellidoPaterno;

    cout << "Digite su apellido materno: " << endl;
    cin >> apellidoMaterno;

    cout << "Digite su fecha de nacimiento (DD/MM/AAAA): " << endl;
    cin >> fechaNacimiento;

    // 1. Primera y segunda posición
    rfc = apellidoPaterno[0];

    for (int control = 0, index = 1; index < apellidoPaterno.length() && control == 0; index++) {
        char data = tolower(apellidoPaterno[index]);
        if (data == 'a' || data == 'e' || data == 'i' || data == 'o' || data == 'u') {
            rfc = rfc + apellidoPaterno[index];
            control = 1;
        }
    }

    // 2. Tercera posición
    if (apellidoMaterno.empty()) {
        rfc = rfc + "X";
    } else {
        rfc = rfc + apellidoMaterno[0];
    }

    // 3. Cuarta posición
    rfc = rfc + primerNombre[0];
    // 4. Quinta y sexta posición
    rfc = rfc + fechaNacimiento[8];
    rfc = rfc + fechaNacimiento[9];
    // 5. Septima y octava posición
    rfc = rfc + fechaNacimiento[3];
    rfc = rfc + fechaNacimiento[4];
    // 6. Novena y decima posición
    rfc = rfc + fechaNacimiento[0];
    rfc = rfc + fechaNacimiento[1];

    // homoclave
    rfc = rfc + "XXX";

    cout << "RFC: " << rfc << endl;

    return 0;
}
