#include<iostream>
#include<iomanip>
using namespace std;

int main() {
    int N;
    while(cin >> N, N) {
        for(int i=0; i<N; i++) {
            for(int j=0; j<N; j++) {
                if (j>0) cout << " ";
                cout << setw(3) << (1+abs(i-j));
            }
            cout << endl;
        }
        cout << endl;
    }
}