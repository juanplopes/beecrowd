#include<iostream>
using namespace std;

int main() {
    int A, B;
    int inter = 0, gremio = 0, empates = 0;
    while(cin >> A >> B) {
        if (A>B) inter++;
        if (B>A) gremio++;
        if (A==B) empates++;

        cout << "Novo grenal (1-sim 2-nao)" << endl;
        int opt; cin >> opt;
        if (opt == 2) break;
    }

    cout << (inter+gremio+empates) << " grenais" << endl;
    cout << "Inter:" << inter << endl;
    cout << "Gremio:" << gremio << endl;
    cout << "Empates:" << empates << endl;

    if (inter > gremio) {
        cout << "Inter venceu mais" << endl;
    } else if (gremio > inter) {
        cout << "Gremio venceu mais" << endl;
    } else {
        cout << "Nao houve vencedor" << endl;
    }
}