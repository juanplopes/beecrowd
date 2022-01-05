#include<iostream>
#include<string>
using namespace std;

int main() {
    int P, J1, J2, R, A;
    while(cin >> P >> J1 >> J2 >> R >> A) {
        cout << "Jogador " 
            << (!R && !A && (J1+J2)%2 == (1-P) || R != A ? 1 : 2)
            << " ganha!" << endl;
    }
}
