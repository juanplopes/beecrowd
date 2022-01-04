#include<iostream>
using namespace std;

bool prime(int n) {
    for(long long i=2; i*i<=n; i++) {
        if (n%i == 0) return false;
    }
    return true;
}
int main() {
    int temp; cin >> temp;
    int N;
    while(cin >> N) {
        cout << (prime(N) ? "Prime" : "Not Prime") << endl;
    }

}
