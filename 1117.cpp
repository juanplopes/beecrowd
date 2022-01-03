#include<iostream>
#include<iomanip>
using namespace std;

double T[2];

int main() {
    double N; 
    int count = 0;
    while(cin >> N, count < 2) {
        if (N < 0 | N > 10) {
            cout << "nota invalida" << endl;
            continue;
        }
        T[count++] = N;
    }
    cout << "media = " << fixed << setprecision(2) << (T[0] + T[1])/2 << endl;
}
