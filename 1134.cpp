#include<iostream>
using namespace std;

int T[3];

int main() {
    int A;    
    while(cin >> A, A != 4) {
        T[A-1]++;
    }
    cout << "MUITO OBRIGADO" << endl;
    cout << "Alcool: " << T[0] << endl;
    cout << "Gasolina: " << T[1] << endl;
    cout << "Diesel: " << T[2] << endl;
}
