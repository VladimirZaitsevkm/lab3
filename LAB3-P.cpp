#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    cout << fixed << setprecision(4);
    double Ga = 0.9 * pow(10, 5), Re = 6.1 * pow(10, 4), W = 0.0, A = 0.0, Pe = 0.0;

    while (W < 0.2) {
        W += 0.1;
        A = W * pow(Re, 0.11);
        if (A < 1) {
            Pe = 4.75 * pow(A, 1.4) * pow(Ga, -0.17);
            cout << Pe << "     " << A << '\n';
        }
        else {
            Pe = 2.25 * pow(10, -3) * pow(A, -3.3) * pow(Ga, 0.29);
            cout << Pe << "     " << A << '\n';
        }
    }
    if (W == 0.2) {
        W += 0.3;
        A = W * pow(Re, 0.11);
        if (A < 1) {
            Pe = 4.75 * pow(A, 1.4) * pow(Ga, -0.17);
            cout << Pe << "     " << A << '\n';
        }
        else {
            Pe = 2.25 * pow(10, -3) * pow(A, -3.3) * pow(Ga, 0.29);
            cout << Pe << "     " << A << '\n';
        }
    }
    if (W == 0.5) {
        W += 0.25;
        A = W * pow(Re, 0.11);
        if (A < 1) {
            Pe = 4.75 * pow(A, 1.4) * pow(Ga, -0.17);
            cout << Pe << "     " << A << '\n';
        }
        else {
            Pe = 2.25 * pow(10, -3) * pow(A, -3.3) * pow(Ga, 0.29);
            cout << Pe << "     " << A << '\n';
        }
    }
    if (W == 0.75) {
        W += 0.1;
        A = W * pow(Re, 0.11);
        if (A < 1) {
            Pe = 4.75 * pow(A, 1.4) * pow(Ga, -0.17);
            cout << Pe << "     " << A << '\n';
        }
        else {
            Pe = 2.25 * pow(10, -3) * pow(A, -3.3) * pow(Ga, 0.29);
            cout << Pe << "     " << A << '\n';
        }
    }
    if (W == 0.85) {
        A = W * pow(Re, 0.11);
        if (A < 1) {
            Pe = 4.75 * pow(A, 1.4) * pow(Ga, -0.17);
            cout << Pe << "     " << A << '\n';
        }
        else {
            Pe = 2.25 * pow(10, -3) * pow(A, -3.3) * pow(Ga, 0.29);
            cout << Pe << "     " << A << '\n';
        }
    }

    return 0;
}