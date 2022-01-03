#include<iostream>
using namespace std;

bool prime(int n) {
    for(int i=2; i*i<=n; i++)
        if (n%i == 0) return false;
    return true;
}

int main() {
    int temp; cin >> temp;
    int N;
    while(cin >> N) {
        if (prime(N)) {
            cout << N << " eh primo" << endl;
        } else {
            cout << N << " nao eh primo" << endl;
        }
    }
}
