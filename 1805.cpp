#include<iostream>
using namespace std;

int main() {
    long long N, M;
    while(cin >> N >> M) {
        cout << M*(M+1)/2 - N*(N-1)/2 << endl;
    }
}
