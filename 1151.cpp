#include<iostream>
using namespace std;

int main() {
    int N;
    while(cin >> N) {
        int a = 0, b = 1;
        cout << 0;
        if (N > 1) cout << " " << 1;
        for(int i=2; i<N; i++) {
            int c = a+b;
            cout << " " << c;
            a = b;
            b = c;
        }
        cout << endl;
    }
}