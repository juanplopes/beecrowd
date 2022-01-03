#include<iostream>
#include<string>
#include<map>
using namespace std;

map<string, int> M;

int main() {
    int temp; cin >> temp;
    string A, B;

    M["pedra"] = 0;
    M["papel"] = 1;
    M["tesoura"] = 2;
    M["Spock"] = 3;
    M["lagarto"] = 4;

    int test = 0;
    while(cin >> A >> B) {
        int a = M[A];
        int b = M[B];
        if (a == b) {
            cout << "Caso #" << ++test << ": De novo!" << endl;
        } else if ((a-b+5)%5%2 != 0) {
            cout << "Caso #" << ++test << ": Bazinga!" << endl;
        } else {
            cout << "Caso #" << ++test << ": Raj trapaceou!" << endl;
        }
    }
}
