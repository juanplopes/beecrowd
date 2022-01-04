#include<iostream>
#include<algorithm>
using namespace std;

int T[4];

bool ok(int a, int b, int c) {
    return T[a] < T[b]+T[c] and T[b] < T[a]+T[c] and T[c] < T[a]+T[b];
}

int main() {
    while(cin >> T[0] >> T[1] >> T[2] >> T[3]) {
        sort(T, T+4);
        bool answer = ok(0, 1, 2) || ok(0, 1, 3) || ok(0, 2, 3) || ok(1, 2, 3);
        cout << (answer?'S':'N') << endl;
    }
}
