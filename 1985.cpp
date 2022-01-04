#include<iostream>
#include<iomanip>
using namespace std;

int main() {
    int N;
    while(cin >> N) {
        double total = 0;
        for(int i=0; i<N; i++) {
            int P, Q; cin >> P >> Q;
            total += Q*((P-1000)+0.5);
        }
        cout << fixed << setprecision(2) << total << endl;
    }
}
