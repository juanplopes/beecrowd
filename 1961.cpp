#include<iostream>
#include<iomanip>
using namespace std;

int main() {
    int P, N;
    while(cin >> P >> N) {
        bool ok = true;
        int last; cin >> last;
        for(int i=1; i<N; i++) {
            int next; cin >> next;
            ok &= abs(next-last) <= P;
            last = next;
        }
        cout << (ok ? "YOU WIN" : "GAME OVER") << endl;
    }
}
