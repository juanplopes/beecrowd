#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

int main() {
    int N;
    while(cin >> N, N) {
        int w = ceil(log10(1ull<<(max(2*N-2, 0))));
        for(int i=0; i<N; i++) {
            for(int j=0; j<N; j++) {
                if (j > 0) cout << " ";
                cout << setw(w) << (1ull<<(i+j));
            }
            cout << endl;
        }
        cout << endl;
    }
}