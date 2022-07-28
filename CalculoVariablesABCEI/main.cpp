#include <iostream>

using namespace std;

int main() {

    int A, B, C, E, I;

    A = 2;
    B = 8;
    C = 3;
    E = 1;
    I = 2;

    cout << "Variables: A = " << A << ", B = " << B << ", C = " << C << ", E = " << E << ", I = " << I << endl;

    while (I <= 5) {
        C = C + 2;
        I = I + E;
        cout << "Variables: A = " << A << ", B = " << B << ", C = " << C << ", E = " << E << ", I = " << I << endl;
    }

    return 0;
}
