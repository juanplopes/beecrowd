#include<iostream>
#include<string>
#include<iomanip>
using namespace std;

int main() {
    int N;
    while(cin >> N) {
        int A = 0, B = 0, C = 0, D = 0, E = 0, F = 0;
        int a, b, c, d, e, f;
        for(int i=0; i<N; i++) {
            string s; cin >> s;
            cin >> a >> b >> c >> d >> e >> f;
            A += a; B += b; C += c;
            D += d; E += e; F += f;
        }
        cout << "Pontos de Saque: " << fixed << setprecision(2) << D/double(A)*100 << " %." << endl;
        cout << "Pontos de Bloqueio: " << fixed << setprecision(2) << E/double(B)*100 << " %." << endl;
        cout << "Pontos de Ataque: " << fixed << setprecision(2) << F/double(C)*100 << " %." << endl;
    }
}
