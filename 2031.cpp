#include<iostream>
#include<string>
using namespace std;

int main() {
    int temp; cin >> temp;
    string A, B;
    while(cin >> A >> B) {
        if (A == "ataque" && B == "ataque") {
            cout << "Aniquilacao mutua" << endl;
        } else if (A == "pedra" && B == "pedra") {
            cout << "Sem ganhador" << endl;
        } else if (A == "papel" && B == "papel") {
            cout << "Ambos venceram" << endl;
        } else if (A == "ataque") {
            cout << "Jogador 1 venceu" << endl;
        } else if (B == "ataque") {
            cout << "Jogador 2 venceu" << endl;
        } else if (A == "pedra") {
            cout << "Jogador 1 venceu" << endl;
        } else if (B == "pedra") {
            cout << "Jogador 2 venceu" << endl;
        } 
    }
}
