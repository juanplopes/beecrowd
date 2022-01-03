#include<iostream>
using namespace std;

unsigned long long fib(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    unsigned long long a = 0, b = 1;
    for (int i=1; i<n; i++) {
        unsigned long long c = a+b;
        a = b;
        b = c;
    }
    return b;
}

int main() {
    int temp; cin >> temp;
    int N;
    while(cin >> N) {
        cout << "Fib(" << N << ") = " << fib(N) << endl;
    }
}
