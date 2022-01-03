#include<iostream>
#include<iomanip>
using namespace std;

double T[2];

int main() {
    while(true) {
        double N; 
        int count = 0;
        while(count < 2) {
            cin >> N;
            if (N < 0 | N > 10) {
                cout << "nota invalida" << endl;
                continue;
            }
            T[count++] = N;
        }
        cout << "media = " << fixed << setprecision(2) << (T[0] + T[1])/2 << endl;
        
        cout << "novo calculo (1-sim 2-nao)" << endl;
        int opt;
        while(cin >> opt, opt != 1 && opt != 2) {
            cout << "novo calculo (1-sim 2-nao)" << endl;
        }
        if (opt == 2) break;
    }
}
