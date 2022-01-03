#include<iostream>
using namespace std;

unsigned long long F[40], T[40];

int main() {
    int temp; cin >> temp;
    int N;
    F[0] = 0; F[1] = 1;
    T[0] = 1; T[1] = 1;
    for(int i=2; i<40; i++) {
        F[i] = F[i-1] + F[i-2];
        T[i] = 1 + T[i-1] + T[i-2];
    }

    while(cin >> N) {
        cout << "fib(" << N << ") = " << T[N]-1 << " calls = " << F[N] << endl;
    }
}