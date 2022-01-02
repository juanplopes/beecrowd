#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

int main() {
    double N;
    while(cin >> N) {
        double taxes = 0;
        taxes += max(0.0, min(1000 * 0.08, (N - 2000)*0.08));
        taxes += max(0.0, min(1500 * 0.18, (N - 3000)*0.18));
        taxes += max(0.0, (N - 4500)*0.28);
        if (taxes == 0) {
            cout << "Isento" << endl;
        } else {
            cout << fixed << setprecision(2) << "R$ " << taxes << endl;
        }
    }
}